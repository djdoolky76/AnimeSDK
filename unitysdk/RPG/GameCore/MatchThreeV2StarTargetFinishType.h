#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class MatchThreeV2StarTargetFinishType : ::System::Int32
	{
		None = 0,
		UseBird = 1,
		CarryBattleItem = 2,
		CombatPowerGreater = 3,
		CarryHigherLevelBattleItem = 4,
	};
}
