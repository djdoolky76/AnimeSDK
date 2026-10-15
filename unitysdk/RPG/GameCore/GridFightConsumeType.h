#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class GridFightConsumeType : ::System::Int32
	{
		Remove = 0,
		Roll = 1,
		Upgrade = 2,
		Copy = 3,
		GainRecommendEquip = 4,
	};
}
