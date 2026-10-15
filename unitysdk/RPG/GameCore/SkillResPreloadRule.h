#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class SkillResPreloadRule : ::System::Int32
	{
		Default = 0,
		Load = 1,
		Manual = 2,
	};
}
