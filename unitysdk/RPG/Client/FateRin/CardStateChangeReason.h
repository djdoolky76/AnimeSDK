#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::FateRin
{
	enum class CardStateChangeReason : ::System::Int32
	{
		None = 0,
		Draw = 1,
		Discard = 2,
		PileTransfer = 3,
		RecycleDiscardPile = 4,
		PlayCard = 5,
		AddCard = 6,
	};
}
