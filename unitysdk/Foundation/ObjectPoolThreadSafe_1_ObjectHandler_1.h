#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int ObjectPoolThreadSafe_1_ObjectHandler_1_TypeDefinitionIndex = 8111;

	template <typename T>
	struct alignas(8) ObjectPoolThreadSafe_1_ObjectHandler_1
	{
		T _object; // 0x0
	};
}
