#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int ExclusiveResourceManager_3_TickState_TypeDefinitionIndex = 8839;

	template <typename T1, typename T2, typename T3>
	struct alignas(8) ExclusiveResourceManager_3_TickState
	{
		T1 Resource; // 0x0
		T2 Request; // 0x0
	};
}
