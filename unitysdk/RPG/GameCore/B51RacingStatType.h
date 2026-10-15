#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class B51RacingStatType : ::System::Int32
	{
		None = 0,
		Speed = 1,
		Acceleration = 2,
		Aggressiveness = 3,
		Drift = 4,
		Charge = 5,
	};
}
