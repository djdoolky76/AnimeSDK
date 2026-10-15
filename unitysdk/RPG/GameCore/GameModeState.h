#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class GameModeState : ::System::Int32
	{
		PreBattle = 0,
		Battle = 1,
		BattleFinish = 2,
		Finish = 3,
	};
}
