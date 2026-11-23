#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/FixedBytes32Align8.h"

namespace Unity::Collections
{
	inline static constexpr unsigned int FixedList32Bytes_1_TypeDefinitionIndex = 20586;

	template <typename T>
	struct alignas(4) FixedList32Bytes_1
	{
		::Unity::Collections::FixedBytes32Align8 data; // 0x0
	};
}
