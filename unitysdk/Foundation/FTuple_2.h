#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int FTuple_2_TypeDefinitionIndex = 7899;

	template <typename T1, typename T2>
	struct alignas(8) FTuple_2
	{
		T1 Item1; // 0x0
		T2 Item2; // 0x0
	};
}
