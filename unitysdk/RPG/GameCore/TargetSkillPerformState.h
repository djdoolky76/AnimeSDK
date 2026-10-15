#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class TargetSkillPerformState : ::System::Int32
	{
		Unknow = 0,
		Ready = 1,
		TargetPerformBegin = 2,
		TargetPerformFinish = 3,
	};
}
