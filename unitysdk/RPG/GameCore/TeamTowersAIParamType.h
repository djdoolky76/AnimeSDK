#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class TeamTowersAIParamType : ::System::Int32
	{
		None = 0,
		SpeedUpProb = 1,
		WeightHangOver = 2,
		WeightCentroid = 3,
		WeightHeight = 4,
		WeightLocalStable = 5,
		WeightIvy = 6,
		WeightStoneWidth = 7,
	};
}
