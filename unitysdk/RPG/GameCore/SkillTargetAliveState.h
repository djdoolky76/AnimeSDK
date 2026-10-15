#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class SkillTargetAliveState : ::System::Int32
	{
		Alive = 0,
		AliveOrLimbo = 1,
		OnStage = 2,
	};
}
