#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ConvinceTrickSkillType : ::System::Int32
	{
		DoubleEffect = 1,
		SkipCurrent = 2,
		Rollback = 3,
		Analyze = 4,
	};
}
