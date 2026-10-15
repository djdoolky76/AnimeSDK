#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class TurnBasedGameMode_SkillExecutionEventState : ::System::Int32
	{
		None = 0,
		Triggered = 1,
		Interrupted = 2,
	};
}
