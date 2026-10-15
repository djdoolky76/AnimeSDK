#pragma once
// AnimeSDK 4.6 name-resolution core (public SDK style).
// Class lookups resolve through the il2cpp dispatch table anchored at the
// byte-verified class-name getter (GameAssembly + 0x94D0). Only il2cpp runtime
// APIs are used; no external tooling is required to use generated headers.
#include <stdint.h>
#include <windows.h>
#include <string.h>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#ifndef UNITYSDK_OFFSET
#define UNITYSDK_OFFSET(offset) offset
#endif

// 4.6 static field pool pointer (GameAssembly global).
#define STATICFIELDSPOOL_OFFSET UNITYSDK_OFFSET(0x93434B8)

inline HMODULE hIl2Cpp = NULL;

struct Il2CppClass;

namespace UnitySDK
{
	// lanylow-era dispatch table indices (stable across HSR builds).
	enum ApiIndex
	{
		IDX_ASSEMBLY_IMAGE = 22,
		IDX_CLASS_GET_NAME = 37,
		IDX_CLASS_GET_NAMESPACE = 39,
		IDX_CLASS_GET_PARENT = 40,
		IDX_DOMAIN_GET = 63,
		IDX_DOMAIN_GET_ASSEMBLIES = 65,
		IDX_IMAGE_GET_NAME = 168,
		IDX_IMAGE_GET_CLASS_COUNT = 169,
		IDX_IMAGE_GET_CLASS = 170,
	};

	inline void** g_table = nullptr;
	inline std::unordered_map<std::string, Il2CppClass*>* g_map = nullptr;
	// Classes in enumeration order (image walk, first occurrence). The generated
	// *_TypeDefinitionIndex constants use this index so FromTypeDefinitionIndex
	// resolves the same class. Values are capture-local, not game metadata indices.
	inline std::vector<Il2CppClass*>* g_classes = nullptr;

	// Anchor scan: the name getter is a byte-verified leaf inside GameAssembly.
	inline bool ResolveTable()
	{
		HMODULE gameAssembly = GetModuleHandleW(L"GameAssembly.dll");
		HMODULE unityPlayer = GetModuleHandleW(L"UnityPlayer.dll");
		if (!gameAssembly || !unityPlayer)
			return false;

		hIl2Cpp = gameAssembly;
		const ULONGLONG gaBase = reinterpret_cast<ULONGLONG>(gameAssembly);
		const ULONGLONG nameGetter = gaBase + 0x94D0;

		const BYTE* code = reinterpret_cast<const BYTE*>(nameGetter);
		if (code[0] != 0x48 || code[1] != 0x8B || code[2] != 0x41 || code[3] != 0x20 || code[4] != 0xC3)
			return false;

		BYTE* address = reinterpret_cast<BYTE*>(unityPlayer);
		const BYTE* end = address + 0x2600000ULL;
		while (address < end)
		{
			MEMORY_BASIC_INFORMATION mbi = {};
			if (VirtualQuery(address, &mbi, sizeof(mbi)) == 0)
				break;
			const SIZE_T regionSize = mbi.RegionSize;
			if (mbi.State == MEM_COMMIT && (mbi.Protect & (PAGE_NOACCESS | PAGE_GUARD)) == 0)
			{
				const ULONGLONG* q = reinterpret_cast<const ULONGLONG*>(mbi.BaseAddress);
				const SIZE_T count = regionSize / 8;
				for (SIZE_T i = 0; i < count; ++i)
				{
					if (q[i] == nameGetter)
					{
						g_table = reinterpret_cast<void**>(reinterpret_cast<BYTE*>(const_cast<ULONGLONG*>(&q[i])) - IDX_CLASS_GET_NAME * 8);
						return true;
					}
				}
			}
			address += regionSize;
		}
		return false;
	}

	inline void* TableFn(int index)
	{
		return g_table ? g_table[index] : nullptr;
	}

	// image -> namespace -> name map. Built once from the live domain.
	inline bool BuildMap()
	{
		typedef const void* (__cdecl* DomainGet)();
		typedef const void** (__cdecl* DomainGetAssemblies)(const void*, size_t*);
		typedef const void* (__cdecl* AssemblyGetImage)(const void*);
		typedef size_t(__cdecl* ImageGetClassCount)(const void*);
		typedef const void* (__cdecl* ImageGetClass)(const void*, size_t);
		typedef const char* (__cdecl* ClassGetName)(const void*);

		if (!g_table)
			return false;

		auto domain_get = reinterpret_cast<DomainGet>(g_table[IDX_DOMAIN_GET]);
		auto get_assemblies = reinterpret_cast<DomainGetAssemblies>(g_table[IDX_DOMAIN_GET_ASSEMBLIES]);
		auto assembly_get_image = reinterpret_cast<AssemblyGetImage>(g_table[IDX_ASSEMBLY_IMAGE]);
		auto image_count = reinterpret_cast<ImageGetClassCount>(g_table[IDX_IMAGE_GET_CLASS_COUNT]);
		auto image_class = reinterpret_cast<ImageGetClass>(g_table[IDX_IMAGE_GET_CLASS]);
		auto class_get_name = reinterpret_cast<ClassGetName>(g_table[IDX_CLASS_GET_NAME]);
		auto class_get_namespace = reinterpret_cast<ClassGetName>(g_table[IDX_CLASS_GET_NAMESPACE]);

		const void* domain = domain_get();
		if (!domain)
			return false;
		size_t assemblyCount = 0;
		const void** assemblies = get_assemblies(domain, &assemblyCount);
		if (!assemblies || assemblyCount == 0 || assemblyCount > 2000)
			return false;

		auto* map = new std::unordered_map<std::string, Il2CppClass*>();
		map->reserve(160000);
		auto* classes = new std::vector<Il2CppClass*>();
		classes->reserve(160000);
		std::unordered_set<Il2CppClass*> seen;

		for (size_t a = 0; a < assemblyCount; ++a)
		{
			const void* image = assembly_get_image(assemblies[a]);
			if (!image)
				continue;
			const size_t count = image_count(image);
			if (count == 0 || count > 2000000)
				continue;
			for (size_t c = 0; c < count; ++c)
			{
				const void* klass = image_class(image, c);
				if (!klass)
					continue;
				auto* classPointer = const_cast<Il2CppClass*>(reinterpret_cast<const Il2CppClass*>(klass));
				if (seen.insert(classPointer).second)
					classes->push_back(classPointer);
				const char* name = class_get_name(klass);
				const char* ns = class_get_namespace(klass);
				if (!name)
					continue;
				std::string key;
				key.reserve(160);
				key.append(ns ? ns : "");
				key.push_back('\x1F');
				key.append(name);
				map->emplace(key, const_cast<Il2CppClass*>(reinterpret_cast<const Il2CppClass*>(klass)));
			}
		}

		g_map = map;
		g_classes = classes;
		return true;
	}

	inline Il2CppClass* FromName(const char* namespaze, const char* name)
	{
		if (!g_table && !ResolveTable())
			return nullptr;
		if (!g_map && !BuildMap())
			return nullptr;
		std::string key;
		key.reserve(160);
		key.append(namespaze ? namespaze : "");
		key.push_back('\x1F');
		key.append(name ? name : "");
		auto it = g_map->find(key);
		return it == g_map->end() ? nullptr : it->second;
	}

	inline void Init()
	{
		ResolveTable();
	}
}

struct Il2CppClass
{
	const char* GetName()
	{
		if (!UnitySDK::g_table)
			return nullptr;
		return ((const char*(__cdecl*)(PVOID))UnitySDK::g_table[UnitySDK::IDX_CLASS_GET_NAME])(this);
	}

	const char* GetNamespace()
	{
		if (!UnitySDK::g_table)
			return nullptr;
		return ((const char*(__cdecl*)(PVOID))UnitySDK::g_table[UnitySDK::IDX_CLASS_GET_NAMESPACE])(this);
	}

	Il2CppClass* GetParent()
	{
		if (!UnitySDK::g_table)
			return nullptr;
		return ((Il2CppClass*(__cdecl*)(PVOID))UnitySDK::g_table[UnitySDK::IDX_CLASS_GET_PARENT])(this);
	}

	// 4.5-compatible handle resolver. The generated *_TypeDefinitionIndex
	// constants are indices into the live enumeration (image walk order), so
	// this maps them back to the same class objects deterministically.
	static Il2CppClass* FromTypeDefinitionIndex(unsigned int Index)
	{
		if (!UnitySDK::g_classes && !UnitySDK::ResolveTable())
			return nullptr;
		if (!UnitySDK::g_classes && !UnitySDK::BuildMap())
			return nullptr;
		return Index < UnitySDK::g_classes->size() ? (*UnitySDK::g_classes)[Index] : nullptr;
	}

	PVOID GetStaticField(DWORD Offset)
	{
		PVOID StaticFields = *(PVOID*)((PBYTE)hIl2Cpp + STATICFIELDSPOOL_OFFSET);
		if (!StaticFields)
			return NULL;
		return (PBYTE)StaticFields + Offset;
	}
};

struct Il2CppObject
{
	union
	{
		Il2CppClass* klass;
		PVOID vtable;
	};
	PVOID monitor;
};

struct Il2CppArrayBounds
{
	SIZE_T length;
	SIZE_T lower_bound;
};

template <typename T>
struct Il2CppArray
{
	Il2CppObject obj;
	Il2CppArrayBounds* bounds;
	SIZE_T max_length;
	T vector[32];
};

namespace System
{
	using Void = void;
	using Boolean = bool;
	using Char = wchar_t;
	using SByte = int8_t;
	using Byte = uint8_t;
	using Int16 = int16_t;
	using UInt16 = uint16_t;
	using Int32 = int32_t;
	using UInt32 = uint32_t;
	using Int64 = int64_t;
	using UInt64 = uint64_t;
	using Single = float;
	using Double = double;
	using IntPtr = intptr_t;
	using UIntPtr = uintptr_t;
}
