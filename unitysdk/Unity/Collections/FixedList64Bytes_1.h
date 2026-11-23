#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/FixedBytes64Align8.h"

namespace Unity::Collections
{
	inline static constexpr unsigned int FixedList64Bytes_1_TypeDefinitionIndex = 20560;

	template <typename T>
	struct alignas(4) FixedList64Bytes_1
	{
		::Unity::Collections::FixedBytes64Align8 data; // 0x0
	};
}
