#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class ExpeditionBattleMapState : ::System::Int32
	{
		Invalid = 0,
		Locked = 1,
		UnlockedNotChallenged = 2,
		UnlockedChallenged = 3,
	};
}
