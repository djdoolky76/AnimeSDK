#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int Tuple_3_TypeDefinitionIndex = 8309;

	template <typename T1, typename T2, typename T3>
	struct alignas(8) Tuple_3
	{
		T1 item1; // 0x0
		T2 item2; // 0x0
		T3 item3; // 0x0
	};
}
