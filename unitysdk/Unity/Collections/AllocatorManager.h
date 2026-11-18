#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/AllocatorManager_AllocatorHandle.h"
#include "unitysdk/Unity/Collections/AllocatorManager_Block.h"

#define UNITY_COLLECTIONS_ALLOCATORMANAGER_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x2000D4B0)
#define UNITY_COLLECTIONS_ALLOCATORMANAGER_FREE_1_OFFSET UNITYSDK_OFFSET(0x2000D7D0)
#define UNITY_COLLECTIONS_ALLOCATORMANAGER_FREE_OFFSET UNITYSDK_OFFSET(0x2000D720)
#define UNITY_COLLECTIONS_ALLOCATORMANAGER_TRYLEGACY_OFFSET UNITYSDK_OFFSET(0x2000D900)
#define UNITY_COLLECTIONS_ALLOCATORMANAGER_TRY_OFFSET UNITYSDK_OFFSET(0x2000D650)
#define UNITY_COLLECTIONS_ALLOCATORMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x2000D9A0)

namespace Unity::Collections
{
	inline static constexpr unsigned int AllocatorManager_TypeDefinitionIndex = 18005;

	class AllocatorManager : public ::System::Object
	{
	public:
		static ::Unity::Collections::AllocatorManager_AllocatorHandle* StaticGet_None()
		{
			return (::Unity::Collections::AllocatorManager_AllocatorHandle*)Il2CppClass::FromTypeDefinitionIndex(AllocatorManager_TypeDefinitionIndex)->GetStaticField(0x40F0);
		}
		static ::Unity::Collections::AllocatorManager_AllocatorHandle* StaticGet_Invalid()
		{
			return (::Unity::Collections::AllocatorManager_AllocatorHandle*)Il2CppClass::FromTypeDefinitionIndex(AllocatorManager_TypeDefinitionIndex)->GetStaticField(0x40F4);
		}
		static ::Unity::Collections::AllocatorManager_AllocatorHandle* StaticGet_Persistent()
		{
			return (::Unity::Collections::AllocatorManager_AllocatorHandle*)Il2CppClass::FromTypeDefinitionIndex(AllocatorManager_TypeDefinitionIndex)->GetStaticField(0x40F8);
		}
		static ::Unity::Collections::AllocatorManager_AllocatorHandle* StaticGet_Temp()
		{
			return (::Unity::Collections::AllocatorManager_AllocatorHandle*)Il2CppClass::FromTypeDefinitionIndex(AllocatorManager_TypeDefinitionIndex)->GetStaticField(0x40FC);
		}
		static ::Unity::Collections::AllocatorManager_AllocatorHandle* StaticGet_AudioKernel()
		{
			return (::Unity::Collections::AllocatorManager_AllocatorHandle*)Il2CppClass::FromTypeDefinitionIndex(AllocatorManager_TypeDefinitionIndex)->GetStaticField(0x4100);
		}
		static ::Unity::Collections::AllocatorManager_AllocatorHandle* StaticGet_TempJob()
		{
			return (::Unity::Collections::AllocatorManager_AllocatorHandle*)Il2CppClass::FromTypeDefinitionIndex(AllocatorManager_TypeDefinitionIndex)->GetStaticField(0x4104);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_ALLOCATORMANAGER__CCTOR_OFFSET))();
		}

		static ::PVOID Allocate(::Unity::Collections::AllocatorManager_AllocatorHandle handle, ::System::Int32 itemSizeInBytes, ::System::Int32 alignmentInBytes, ::System::Int32 items)
		{
			return ((::PVOID(*)(::Unity::Collections::AllocatorManager_AllocatorHandle, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_ALLOCATORMANAGER_ALLOCATE_OFFSET))(handle, itemSizeInBytes, alignmentInBytes, items);
		}

		static ::System::Void Free(::Unity::Collections::AllocatorManager_AllocatorHandle handle, ::PVOID pointer, ::System::Int32 itemSizeInBytes, ::System::Int32 alignmentInBytes, ::System::Int32 items)
		{
			return ((::System::Void(*)(::Unity::Collections::AllocatorManager_AllocatorHandle, ::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_ALLOCATORMANAGER_FREE_OFFSET))(handle, pointer, itemSizeInBytes, alignmentInBytes, items);
		}

		static ::System::Void Free_1(::Unity::Collections::AllocatorManager_AllocatorHandle handle, ::PVOID pointer)
		{
			return ((::System::Void(*)(::Unity::Collections::AllocatorManager_AllocatorHandle, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_ALLOCATORMANAGER_FREE_1_OFFSET))(handle, pointer);
		}

		static ::System::Int32 TryLegacy(::Unity::Collections::AllocatorManager_Block& block)
		{
			return ((::System::Int32(*)(::Unity::Collections::AllocatorManager_Block&))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_ALLOCATORMANAGER_TRYLEGACY_OFFSET))(block);
		}

		static ::System::Int32 Try(::Unity::Collections::AllocatorManager_Block& block)
		{
			return ((::System::Int32(*)(::Unity::Collections::AllocatorManager_Block&))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_ALLOCATORMANAGER_TRY_OFFSET))(block);
		}
	};
}
