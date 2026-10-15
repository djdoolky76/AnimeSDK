#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ComplexSkillAIValueCompareType : ::System::Int32
	{
		Greater = 0,
		GreaterEqual = 1,
		Equal = 2,
		LessEqual = 3,
		Less = 4,
	};
}
