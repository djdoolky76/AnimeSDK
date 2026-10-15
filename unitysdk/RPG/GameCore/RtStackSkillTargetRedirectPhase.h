#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class RtStackSkillTargetRedirectPhase : ::System::Int32
	{
		Decision = 1,
		BeforeUse = 2,
		All = 3,
	};
}
