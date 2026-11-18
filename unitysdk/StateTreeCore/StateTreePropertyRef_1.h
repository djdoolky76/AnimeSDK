#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreePropertyRef.h"
#include "unitysdk/System/ValueType.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreePropertyRef_1_TypeDefinitionIndex = 31090;

	template <typename T>
	struct alignas(4) StateTreePropertyRef_1
	{
		::StateTreeCore::StateTreePropertyRef PropertyRef; // 0x0
	};
}
