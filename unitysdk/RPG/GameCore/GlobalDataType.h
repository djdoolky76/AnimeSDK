#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class GlobalDataType : ::System::Int32
	{
		SwapAreaDicePointSum = 0,
		SwapAreaDiceDifferentPointCount = 1,
		ChallengersSamePointPairCount = 2,
		LastAttackDamage = 3,
	};
}
