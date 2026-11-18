#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int Tuple_2_TypeDefinitionIndex = 7928;

	template <typename T1, typename T2>
	struct alignas(8) Tuple_2
	{
		T1 item1; // 0x0
		T2 item2; // 0x0
	};
}
