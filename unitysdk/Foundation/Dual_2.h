#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int Dual_2_TypeDefinitionIndex = 8982;

	template <typename T1, typename T2>
	struct alignas(8) Dual_2
	{
		T1 real; // 0x0
		T1 dual; // 0x0
	};
}
