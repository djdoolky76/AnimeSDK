#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::FateRin::Card
{
	enum class FateRinBattleCardPileType : ::System::Int32
	{
		None = 0,
		Draw = 1,
		Discard = 2,
		Exile = 3,
	};
}
