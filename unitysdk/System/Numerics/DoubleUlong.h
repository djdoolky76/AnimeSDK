#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Numerics
{
	inline static constexpr unsigned int DoubleUlong_TypeDefinitionIndex = 3843;

	struct alignas(4) DoubleUlong
	{
		::System::Double dbl; // 0x10
		::System::UInt64 uu; // 0x10
	};
}
