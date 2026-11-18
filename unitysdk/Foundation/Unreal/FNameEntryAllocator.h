#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FNameEntryAllocator___blocks_e__FixedBuffer.h"
#include "unitysdk/Foundation/DefaultConstruct.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/Unreal/FNameEntryHandle.h"

#define FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR_ALLOCATEBLOCK_OFFSET UNITYSDK_OFFSET(0x1FFE4FC0)
#define FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR_ALLOCATENAMEENTRY_OFFSET UNITYSDK_OFFSET(0x9B39F0)
#define FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR_CREATE_OFFSET UNITYSDK_OFFSET(0x1FFE5490)
#define FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR_FREEBLOCK_OFFSET UNITYSDK_OFFSET(0x1FFE5090)
#define FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x5CA830)
#define FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR_NEWBLOCK_OFFSET UNITYSDK_OFFSET(0x9B39E0)
#define FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR_RESOLVE_1_OFFSET UNITYSDK_OFFSET(0x9B3A00)
#define FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR_TOALIGNEDLENGTH_OFFSET UNITYSDK_OFFSET(0x1FFE5030)
#define FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFE4EF0)
#define FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x9B3920)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FNameEntryAllocator_TypeDefinitionIndex = 9066;

	struct alignas(4) FNameEntryAllocator
	{
		static ::System::Int32* StaticGet_DataOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FNameEntryAllocator_TypeDefinitionIndex)->GetStaticField(0x3B30);
		}
		static ::System::Int32* StaticGet_BlockByteSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FNameEntryAllocator_TypeDefinitionIndex)->GetStaticField(0x3B34);
		}
		static ::System::Int32* StaticGet_Stride()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FNameEntryAllocator_TypeDefinitionIndex)->GetStaticField(0x3B38);
		}
		::System::UInt32 _currentBlock; // 0x10
		::System::Int32 _currentByteCursor; // 0x14
		::Foundation::Unreal::FNameEntryAllocator___blocks_e__FixedBuffer _blocks; // 0x18

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::Foundation::DefaultConstruct _)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::DefaultConstruct))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR__CTOR_OFFSET))(this, _);
		}

		::System::Boolean IsDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR_ISDISPOSED_OFFSET))(this);
		}

		static ::System::Void AllocateBlock(::System::Int64& pointer)
		{
			return ((::System::Void(*)(::System::Int64&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR_ALLOCATEBLOCK_OFFSET))(pointer);
		}

		static ::System::Int32 ToAlignedLength(::System::Int32 bytes)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR_TOALIGNEDLENGTH_OFFSET))(bytes);
		}

		static ::System::Void FreeBlock(::System::Int64& pointer)
		{
			return ((::System::Void(*)(::System::Int64&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR_FREEBLOCK_OFFSET))(pointer);
		}

		::System::Boolean NewBlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR_NEWBLOCK_OFFSET))(this);
		}

		::PVOID AllocateNameEntry(::System::Int32 bytes, ::Foundation::Unreal::FNameEntryHandle& handle)
		{
			return ((::PVOID(*)(::PVOID, ::System::Int32, ::Foundation::Unreal::FNameEntryHandle&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR_ALLOCATENAMEENTRY_OFFSET))(this, bytes, handle);
		}

		/*
		static ::Foundation::Unreal::FNameEntryAllocator Create()
		{
			return ((::Foundation::Unreal::FNameEntryAllocator(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR_CREATE_OFFSET))();
		}
		*/

		::PVOID Resolve_1(::Foundation::Unreal::FNameEntryHandle handle)
		{
			return ((::PVOID(*)(::PVOID, ::Foundation::Unreal::FNameEntryHandle))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR_RESOLVE_1_OFFSET))(this, handle);
		}
	};
}
