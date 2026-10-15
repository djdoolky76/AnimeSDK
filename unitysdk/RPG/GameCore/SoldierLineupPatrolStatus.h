#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class SoldierLineupPatrolStatus : ::System::Int32
	{
		None = 0,
		WaitOfficer = 1,
		WaitOrder = 2,
		GotoTargetPosition = 3,
	};
}
