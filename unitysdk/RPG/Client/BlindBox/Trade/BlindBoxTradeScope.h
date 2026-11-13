#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::BlindBox::Trade
{
	inline static constexpr unsigned int BlindBoxTradeScope_TypeDefinitionIndex = 77178;

	enum class BlindBoxTradeScope : ::System::UInt32
	{
		All = 1,
		Public = 2,
		Private = 3,
	};
}
