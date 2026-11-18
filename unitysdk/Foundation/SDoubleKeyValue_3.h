#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int SDoubleKeyValue_3_TypeDefinitionIndex = 8061;

	template <typename T1, typename T2, typename T3>
	struct alignas(8) SDoubleKeyValue_3
	{
		T1 _Key_k__BackingField; // 0x0
		T2 _SubKey_k__BackingField; // 0x0
		T3 _Value_k__BackingField; // 0x0
	};
}
