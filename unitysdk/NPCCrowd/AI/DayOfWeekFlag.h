#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int DayOfWeekFlag_TypeDefinitionIndex = 57290;

	enum class DayOfWeekFlag : ::System::Int32
	{
		Tuesday = 4,
		Monday = 2,
		Thursday = 16,
		Wednesday = 8,
		Sunday = 1,
		Friday = 32,
		Saturday = 64,
	};
}
