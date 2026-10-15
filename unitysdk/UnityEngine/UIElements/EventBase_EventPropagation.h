#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UIElements
{
	enum class EventBase_EventPropagation : ::System::Int32
	{
		None = 0,
		Bubbles = 1,
		TricklesDown = 2,
		Cancellable = 4,
	};
}
