#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeQueue_1_TypeDefinitionIndex = 18026;

	template <typename T>
	struct alignas(8) NativeQueue_1
	{
		::PVOID m_Buffer; // 0x0
		::PVOID m_QueuePool; // 0x0
		::Unity::Collections::Allocator m_AllocatorLabel; // 0x0
	};
}
