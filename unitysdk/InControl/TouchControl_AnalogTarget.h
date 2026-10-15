#pragma once
#include "unitysdk/unitysdk.h"

namespace InControl
{
	enum class TouchControl_AnalogTarget : ::System::Int32
	{
		None = 0,
		LeftStick = 1,
		RightStick = 2,
		Both = 3,
	};
}
