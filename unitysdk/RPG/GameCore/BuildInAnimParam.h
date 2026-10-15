#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class BuildInAnimParam : ::System::Int16
	{
		BehaviorFlag = 0,
		HitAngle = 1,
		SkillTransitPlaySpeed = 2,
		IsDying = 3,
		LoopClipBlend = 4,
		IsSkill = 5,
		OPTIONAL_MAX = 6,
		HitFlyParam = 7,
		COUNT = 8,
	};
}
