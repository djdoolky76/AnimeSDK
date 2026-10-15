#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class TreasureDungeonItemType : ::System::Int32
	{
		AttackAdd = 1,
		DefenceAdd = 2,
		HPRecovery = 3,
		ExploreRecovery = 4,
		Buff = 5,
		KillEnemy = 6,
		ItemChest = 7,
	};
}
