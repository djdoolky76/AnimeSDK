#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ChenLing
{
	enum class ChenLingGameState : ::System::Int32
	{
		Invalid = 0,
		AdvanceInFormation = 1,
		InBattle = 3,
		HighLight = 6,
		GameFinish = 4,
		Settle = 5,
	};
}
