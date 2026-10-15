#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class SelfSkillPerformState : ::System::Int32
	{
		Unknow = 0,
		Ready = 1,
		AbilityWorking = 2,
		SelfPerformFinish = 3,
		WaitForReset = 4,
	};
}
