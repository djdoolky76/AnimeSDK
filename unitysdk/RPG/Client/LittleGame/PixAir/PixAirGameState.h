#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::PixAir
{
	enum class PixAirGameState : ::System::Int32
	{
		Invalid = 0,
		InBattle = 1,
		BattleEnding = 2,
		Settle = 3,
	};
}
