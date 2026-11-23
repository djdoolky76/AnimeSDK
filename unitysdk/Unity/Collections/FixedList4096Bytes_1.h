#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/FixedBytes4096Align8.h"

namespace Unity::Collections
{
	inline static constexpr unsigned int FixedList4096Bytes_1_TypeDefinitionIndex = 20588;

	template <typename T>
	struct alignas(4) FixedList4096Bytes_1
	{
		::Unity::Collections::FixedBytes4096Align8 data; // 0x0
	};
}
