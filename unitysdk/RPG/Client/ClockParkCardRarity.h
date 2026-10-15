#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class ClockParkCardRarity : ::System::Int32
	{
		None = 0,
		Normal = 1,
		AllPositive = 2,
		AllNegative = 3,
		PartialPositiveOrNone = 4,
		PartialNegativeOrNone = 5,
	};
}
