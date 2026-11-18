#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EPerformInterruptType_TypeDefinitionIndex = 15206;

	enum class EPerformInterruptType : ::System::Int16
	{
		Reset = 2,
		Pause = 1,
		Continue = 0,
	};
}
