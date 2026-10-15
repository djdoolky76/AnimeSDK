#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class SkillTreePointLevelType : ::System::Int32
	{
		CustomLevel = 0,
		MaxLevel = 1,
		MaxWithCharacterLevel = 2,
	};
}
