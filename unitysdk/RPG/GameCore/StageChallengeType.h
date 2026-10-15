#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class StageChallengeType : ::System::Int32
	{
		Unknown = 0,
		Pass = 1,
		AliveCnt = 2,
		DeathCnt = 3,
		TurnCnt = 4,
		UltraAttackCnt = 8,
	};
}
