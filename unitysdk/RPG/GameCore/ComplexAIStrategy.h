#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ComplexAIStrategy : ::System::Byte
	{
		None = 0,
		DefaultComplexAI = 1,
		StandaloneSkillMap = 2,
	};
}
