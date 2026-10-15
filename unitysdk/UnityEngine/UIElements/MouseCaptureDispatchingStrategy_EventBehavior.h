#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UIElements
{
	enum class MouseCaptureDispatchingStrategy_EventBehavior : ::System::Int32
	{
		None = 0,
		IsCapturable = 1,
		IsSentExclusivelyToCapturingElement = 2,
	};
}
