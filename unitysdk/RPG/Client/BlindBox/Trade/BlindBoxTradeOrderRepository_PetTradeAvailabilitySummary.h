#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::BlindBox::Trade
{
	struct alignas(4) BlindBoxTradeOrderRepository_PetTradeAvailabilitySummary
	{
		::System::Boolean HasAvailableInstance; // 0x10
		::System::Boolean HasCdInstance; // 0x11
		::System::Boolean HasLockedInstance; // 0x12
	};
}
