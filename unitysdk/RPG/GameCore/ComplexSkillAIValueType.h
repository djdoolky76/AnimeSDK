#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ComplexSkillAIValueType : ::System::Int32
	{
		TotalPower = 0,
		WeightedTotalPower = 1,
		SummonCount = 2,
	};
}
