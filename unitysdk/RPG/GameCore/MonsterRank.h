#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class MonsterRank : ::System::Int32
	{
		Unknow = 0,
		Minion = 1,
		MinionLv2 = 2,
		Elite = 3,
		LittleBoss = 4,
		BigBoss = 5,
	};
}
