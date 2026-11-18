#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int ComplexValueStorage_1_TypeDefinitionIndex = 7552;

	template <typename T>
	struct alignas(8) ComplexValueStorage_1
	{
		T Value; // 0x0
	};
}
