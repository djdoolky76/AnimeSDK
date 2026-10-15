#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class StateTreeTransitionTriggerType : ::System::Int32
	{
		OnStateCompleted = 0,
		OnStateSucceeded = 1,
		OnStateFailed = 2,
		OnTick = 3,
		OnEvent = 4,
	};
}
