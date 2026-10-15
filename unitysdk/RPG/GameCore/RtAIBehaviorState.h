#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class RtAIBehaviorState : ::System::Int32
	{
		Init = 0,
		Runing = 1,
		Stop = 2,
		Release = 3,
	};
}
