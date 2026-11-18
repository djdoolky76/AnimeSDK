#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System
{
	inline static constexpr unsigned int Nullable_1_TypeDefinitionIndex = 398;

	template <typename T>
	struct alignas(8) Nullable_1
	{
		T value; // 0x0
		::System::Boolean has_value; // 0x0
	};
}
