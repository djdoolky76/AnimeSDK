#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UIElements
{
	enum class CallbackPhase : ::System::Int32
	{
		TargetAndBubbleUp = 1,
		TrickleDownAndTarget = 2,
	};
}
