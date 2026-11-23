#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/FixedBytes512Align8.h"

namespace Unity::Collections
{
	inline static constexpr unsigned int FixedList512Bytes_1_TypeDefinitionIndex = 20561;

	template <typename T>
	struct alignas(4) FixedList512Bytes_1
	{
		::Unity::Collections::FixedBytes512Align8 data; // 0x0
	};
}
