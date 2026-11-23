#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/FixedBytes128Align8.h"

namespace Unity::Collections
{
	inline static constexpr unsigned int FixedList128Bytes_1_TypeDefinitionIndex = 20597;

	template <typename T>
	struct alignas(4) FixedList128Bytes_1
	{
		::Unity::Collections::FixedBytes128Align8 data; // 0x0
	};
}
