#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class PlanetFesFunctionType : ::System::Int32
	{
		AllowAvatarMultiLevelUp = 1,
		AllowCollectAllLandIncome = 2,
		CollectIncomeCriticalHit = 3,
		ChangeMiniGameMaxRaiseValue = 4,
		ChangeAvatarInitStar = 5,
		AvatarLevelUpDiscount = 6,
	};
}
