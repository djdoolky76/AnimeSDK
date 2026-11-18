#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int LinkedHashMap_2_Entry_TypeDefinitionIndex = 8236;

	template <typename T1, typename T2>
	struct alignas(8) LinkedHashMap_2_Entry
	{
		T1 Key; // 0x0
		T2 Value; // 0x0
	};
}
