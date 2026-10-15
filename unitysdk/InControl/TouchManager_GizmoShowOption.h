#pragma once
#include "unitysdk/unitysdk.h"

namespace InControl
{
	enum class TouchManager_GizmoShowOption : ::System::Int32
	{
		Never = 0,
		WhenSelected = 1,
		UnlessPlaying = 2,
		Always = 3,
	};
}
