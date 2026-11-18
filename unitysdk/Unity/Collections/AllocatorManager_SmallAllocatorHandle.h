#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/AllocatorManager_AllocatorHandle.h"

#define UNITY_COLLECTIONS_ALLOCATORMANAGER_SMALLALLOCATORHANDLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x2000D600)

namespace Unity::Collections
{
	inline static constexpr unsigned int AllocatorManager_SmallAllocatorHandle_TypeDefinitionIndex = 18006;

	struct alignas(4) AllocatorManager_SmallAllocatorHandle
	{
		::System::UInt16 Value; // 0x10

		/*
		static ::Unity::Collections::AllocatorManager_SmallAllocatorHandle op_Implicit(::Unity::Collections::AllocatorManager_AllocatorHandle a)
		{
			return ((::Unity::Collections::AllocatorManager_SmallAllocatorHandle(*)(::Unity::Collections::AllocatorManager_AllocatorHandle))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_ALLOCATORMANAGER_SMALLALLOCATORHANDLE_OP_IMPLICIT_OFFSET))(a);
		}
		*/
	};
}
