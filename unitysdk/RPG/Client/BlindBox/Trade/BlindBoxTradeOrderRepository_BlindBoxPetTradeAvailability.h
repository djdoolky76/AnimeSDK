#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::BlindBox::Trade
{
	enum class BlindBoxTradeOrderRepository_BlindBoxPetTradeAvailability : ::System::Int32
	{
		Available = 0,
		Cooldown = 1,
		InTrade = 2,
		Unavailable = 3,
	};
}
