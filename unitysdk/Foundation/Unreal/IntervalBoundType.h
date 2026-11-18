#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Unreal
{
	inline static constexpr unsigned int IntervalBoundType_TypeDefinitionIndex = 8772;

	enum class IntervalBoundType : ::System::Byte
	{
		Inclusive = 2,
		Open = 0,
		Exclusive = 1,
	};
}
