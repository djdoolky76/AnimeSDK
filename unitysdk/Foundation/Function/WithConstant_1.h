#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Function
{
	inline static constexpr unsigned int WithConstant_1_TypeDefinitionIndex = 8762;

	template <typename T>
	struct alignas(8) WithConstant_1
	{
		T Function; // 0x0
		::System::Double Constant; // 0x0
	};
}
