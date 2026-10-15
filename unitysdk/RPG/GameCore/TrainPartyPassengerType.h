#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class TrainPartyPassengerType : ::System::Int32
	{
		None = 0,
		AllPassenger = 1,
		FellowPassenger = 2,
		RandomPassenger = 3,
		SpecifyPassenger = 4,
	};
}
