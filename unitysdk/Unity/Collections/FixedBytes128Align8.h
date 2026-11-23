#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/FixedBytes16Align8.h"

namespace Unity::Collections
{
	inline static constexpr unsigned int FixedBytes128Align8_TypeDefinitionIndex = 20575;

	struct alignas(4) FixedBytes128Align8
	{
		::Unity::Collections::FixedBytes16Align8 offset0000; // 0x10
		::Unity::Collections::FixedBytes16Align8 offset0016; // 0x20
		::Unity::Collections::FixedBytes16Align8 offset0032; // 0x30
		::Unity::Collections::FixedBytes16Align8 offset0048; // 0x40
		::Unity::Collections::FixedBytes16Align8 offset0064; // 0x50
		::Unity::Collections::FixedBytes16Align8 offset0080; // 0x60
		::Unity::Collections::FixedBytes16Align8 offset0096; // 0x70
		::Unity::Collections::FixedBytes16Align8 offset0112; // 0x80
	};
}
