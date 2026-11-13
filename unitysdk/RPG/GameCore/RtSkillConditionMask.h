#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtSkillConditionMask_TypeDefinitionIndex = 17837;

	enum class RtSkillConditionMask : ::System::UInt32
	{
		None = 0,
		All = 3,
		SkillReady = 1,
		TargetValid = 2,
		TargetInRange = 4,
	};
}
