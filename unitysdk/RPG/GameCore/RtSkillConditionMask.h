#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class RtSkillConditionMask : ::System::UInt32
	{
		None = 0,
		All = 3,
		SkillReady = 1,
		TargetValid = 2,
		TargetInRange = 4,
	};
}
