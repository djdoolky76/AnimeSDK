#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Variable_2.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int Variable_1_TypeDefinitionIndex = 8789;

	template <typename T>
	struct alignas(8) Variable_1
	{
		::Foundation::Variable_2<T, T> _variable; // 0x0
	};
}
