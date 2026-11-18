#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

#define UNITY_COLLECTIONS_NATIVEQUEUEDATA_DEALLOCATEQUEUE_OFFSET UNITYSDK_OFFSET(0x2000E900)
#define UNITY_COLLECTIONS_NATIVEQUEUEDATA_GETCURRENTWRITEBLOCKTLS_OFFSET UNITYSDK_OFFSET(0x9B76E0)
#define UNITY_COLLECTIONS_NATIVEQUEUEDATA_SETCURRENTWRITEBLOCKTLS_OFFSET UNITYSDK_OFFSET(0x9B76F0)

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeQueueData_TypeDefinitionIndex = 18025;

	struct alignas(8) NativeQueueData
	{
		::System::IntPtr m_FirstBlock; // 0x10
		::System::IntPtr m_LastBlock; // 0x18
		::System::Int32 m_MaxItems; // 0x20
		::System::Int32 m_CurrentRead; // 0x24
		::PVOID m_CurrentWriteBlockTLS; // 0x28

		::PVOID GetCurrentWriteBlockTLS(::System::Int32 threadIndex)
		{
			return ((::PVOID(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEQUEUEDATA_GETCURRENTWRITEBLOCKTLS_OFFSET))(this, threadIndex);
		}

		::System::Void SetCurrentWriteBlockTLS(::System::Int32 threadIndex, ::PVOID currentWriteBlock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEQUEUEDATA_SETCURRENTWRITEBLOCKTLS_OFFSET))(this, threadIndex, currentWriteBlock);
		}

		static ::System::Void DeallocateQueue(::PVOID data, ::PVOID pool, ::Unity::Collections::Allocator allocation)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVEQUEUEDATA_DEALLOCATEQUEUE_OFFSET))(data, pool, allocation);
		}
	};
}
