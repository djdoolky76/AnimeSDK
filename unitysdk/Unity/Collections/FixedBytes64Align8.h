#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/FixedBytes16Align8.h"

namespace Unity::Collections
{
	inline static constexpr unsigned int FixedBytes64Align8_TypeDefinitionIndex = 20528;

	struct alignas(4) FixedBytes64Align8
	{
		::Unity::Collections::FixedBytes16Align8 offset0000; // 0x10
		::Unity::Collections::FixedBytes16Align8 offset0016; // 0x20
		::Unity::Collections::FixedBytes16Align8 offset0032; // 0x30
		::Unity::Collections::FixedBytes16Align8 offset0048; // 0x40
	};
}
