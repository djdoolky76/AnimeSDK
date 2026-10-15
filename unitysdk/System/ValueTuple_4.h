#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int ValueTuple_4_TypeDefinitionIndex = 131;

	template <typename T1, typename T2, typename T3, typename T4>
	struct alignas(8) ValueTuple_4
	{
		T1 Item1; // 0x0
		T2 Item2; // 0x0
		T3 Item3; // 0x0
		T4 Item4; // 0x0
	};
}
