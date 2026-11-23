#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Unity::Collections
{
	inline static constexpr unsigned int FixedBytes16Align8_TypeDefinitionIndex = 20596;

	struct alignas(4) FixedBytes16Align8
	{
		::System::UInt64 byte0000; // 0x10
		::System::UInt64 byte0008; // 0x18
	};
}
