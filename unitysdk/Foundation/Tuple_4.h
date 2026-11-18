#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int Tuple_4_TypeDefinitionIndex = 8259;

	template <typename T1, typename T2, typename T3, typename T4>
	struct alignas(8) Tuple_4
	{
		T1 item1; // 0x0
		T2 item2; // 0x0
		T3 item3; // 0x0
		T4 item4; // 0x0
	};
}
