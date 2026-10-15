#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class MarbleBattleSpecialKillType : ::System::Int32
	{
		Normal = 0,
		FirstBlood = 1,
		DoubleKill = 2,
		TripleKill = 3,
	};
}
