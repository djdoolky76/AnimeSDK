#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class RtDefenceGlobalPropertyType : ::System::Int32
	{
		BaseMaxHp = 0,
		BaseHp = 1,
		Coin = 2,
		SummonCount = 3,
		UpgradeCount = 4,
		Count = 5,
	};
}
