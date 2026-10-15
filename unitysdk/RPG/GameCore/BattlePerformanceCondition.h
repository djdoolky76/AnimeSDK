#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class BattlePerformanceCondition : ::System::Int32
	{
		UseSkill = 0,
		BattleStart = 1,
		EndUseSkill = 2,
		UseInsertAbility = 3,
		EndUseInsertAbility = 4,
		SpecialWin = 5,
		TurnBegin = 6,
		CharacterDie = 7,
		ClientLevelGraphOperation = 8,
		EndAction = 9,
	};
}
