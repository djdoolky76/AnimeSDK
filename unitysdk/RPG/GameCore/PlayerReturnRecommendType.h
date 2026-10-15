#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class PlayerReturnRecommendType : ::System::Int32
	{
		None = 0,
		Gacha = 1,
		TrailblazeMission = 2,
		Activity = 3,
		CustomGoto = 4,
	};
}
