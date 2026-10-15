#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class RtAIBehaviorStopReason : ::System::Int32
	{
		None = 0,
		Success = 1,
		Fail = 2,
		Cancel = 3,
	};
}
