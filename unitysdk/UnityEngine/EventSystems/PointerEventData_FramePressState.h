#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::EventSystems
{
	enum class PointerEventData_FramePressState : ::System::Int32
	{
		Pressed = 0,
		Released = 1,
		PressedAndReleased = 2,
		NotChanged = 3,
	};
}
