#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::BlindBox::Trade
{
	enum class BlindBoxTradeScope : ::System::UInt32
	{
		All = 1,
		Public = 2,
		Private = 3,
	};
}
