#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::TrainParty
{
	enum class TrainPartySettleSourceType : ::System::Int32
	{
		None = 0,
		Card = 1,
		Event = 2,
		Meeting = 3,
		PassengerLeave = 4,
	};
}
