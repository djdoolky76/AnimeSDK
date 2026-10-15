#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ComplexSkillAISubType : ::System::Int32
	{
		Undefined = 0,
		PreCheck = 1,
		SkillTargetSelect = 2,
		AutoLock = 3,
	};
}
