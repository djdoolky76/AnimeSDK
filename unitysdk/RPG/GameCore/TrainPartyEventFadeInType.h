#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class TrainPartyEventFadeInType : ::System::Int32
	{
		None = 0,
		Positive = 1,
		Negative = 2,
		Passenger = 3,
		Meeting = 4,
	};
}
