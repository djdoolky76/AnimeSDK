#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class BattleTargetConfigType : ::System::Int32
	{
		Unknown = 0,
		ChallengeTarget = 1,
		PassTarget = 2,
	};
}
