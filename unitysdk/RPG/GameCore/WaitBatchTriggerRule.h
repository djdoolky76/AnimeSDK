#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class WaitBatchTriggerRule : ::System::Int32
	{
		Loop = 0,
		LoopAfterAllTriggered = 1,
		EachTriggerOnce = 2,
		TotalTriggerOnce = 3,
	};
}
