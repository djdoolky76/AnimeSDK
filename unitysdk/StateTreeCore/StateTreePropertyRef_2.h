#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreePropertyRef.h"
#include "unitysdk/System/ValueType.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreePropertyRef_2_TypeDefinitionIndex = 31092;

	template <typename T1, typename T2>
	struct alignas(4) StateTreePropertyRef_2
	{
		::StateTreeCore::StateTreePropertyRef PropertyRef; // 0x0
	};
}
