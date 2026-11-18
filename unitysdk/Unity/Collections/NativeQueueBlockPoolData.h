#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITY_COLLECTIONS_NATIVEQUEUEBLOCKPOOLDATA_ALLOCATEBLOCK_OFFSET UNITYSDK_OFFSET(0x9B7600)
#define UNITY_COLLECTIONS_NATIVEQUEUEBLOCKPOOLDATA_FREEBLOCK_OFFSET UNITYSDK_OFFSET(0x9B7670)

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeQueueBlockPoolData_TypeDefinitionIndex = 18023;

	struct alignas(4) NativeQueueBlockPoolData
	{
		::System::IntPtr m_FirstBlock; // 0x10
		::System::Int32 m_NumBlocks; // 0x18
		::System::Int32 m_MaxBlocks; // 0x1C
		::System::Int32 m_AllocLock; // 0x20

		::PVOID AllocateBlock()
		{
			return ((::PVOID(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEQUEUEBLOCKPOOLDATA_ALLOCATEBLOCK_OFFSET))(this);
		}

		::System::Void FreeBlock(::PVOID block)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEQUEUEBLOCKPOOLDATA_FREEBLOCK_OFFSET))(this, block);
		}
	};
}
