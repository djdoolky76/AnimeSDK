#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::BlindBox::Trade
{
	enum class BlindBoxTradeOrderType : ::System::Int32
	{
		None = 0,
		Private = 1,
		Public = 2,
	};
}
