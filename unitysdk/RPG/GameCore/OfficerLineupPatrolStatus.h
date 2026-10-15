#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class OfficerLineupPatrolStatus : ::System::Int32
	{
		None = 0,
		FindAllSoldier = 1,
		WaitAllSoldier = 2,
		Patrol = 3,
		PatrolWaitAllSoldier = 4,
	};
}
