#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int UnsafeHashMap_2_TypeDefinitionIndex = 18034;

	template <typename T1, typename T2>
	struct alignas(8) UnsafeHashMap_2
	{
		::PVOID m_Buffer; // 0x0
		::Unity::Collections::Allocator m_AllocatorLabel; // 0x0
	};
}
