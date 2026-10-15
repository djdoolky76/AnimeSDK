#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class MazeBuffUseType : ::System::Int32
	{
		None = 0,
		TriggerBattle = 1,
		AddBattleBuff = 2,
		SummonUnit = 3,
		Special = 4,
		TriggerBattleIgnoreWeakness = 5,
		AddBattleBuffIgnoreWeakness = 6,
	};
}
