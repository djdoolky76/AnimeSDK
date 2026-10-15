#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ExpeditionBattleFlowStateType : ::System::Int32
	{
		None = 0,
		Start = 1,
		LevelStart = 2,
		Common = 3,
		Special = 4,
		Settlement = 5,
		End = 6,
		RouteParallel = 7,
	};
}
