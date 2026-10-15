#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int ValueTuple_1_TypeDefinitionIndex = 128;

	template <typename T>
	struct alignas(8) ValueTuple_1
	{
		T Item1; // 0x0
	};
}
