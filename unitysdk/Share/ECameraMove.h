#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ECameraMove_TypeDefinitionIndex = 13604;

	enum class ECameraMove : ::System::Int16
	{
		Back = 4,
		CustomBound = 3,
		TriggerPosition = 0,
		Player = 1,
		EnumCount = 5,
		Center = 2,
	};
}
