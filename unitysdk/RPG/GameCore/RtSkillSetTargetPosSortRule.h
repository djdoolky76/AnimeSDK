#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class RtSkillSetTargetPosSortRule : ::System::Int32
	{
		None = 0,
		DistanceToPosTarget = 1,
		Rank = 2,
	};
}
