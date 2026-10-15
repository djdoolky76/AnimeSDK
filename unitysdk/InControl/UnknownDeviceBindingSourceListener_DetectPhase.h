#pragma once
#include "unitysdk/unitysdk.h"

namespace InControl
{
	enum class UnknownDeviceBindingSourceListener_DetectPhase : ::System::Int32
	{
		WaitForInitialRelease = 0,
		WaitForControlPress = 1,
		WaitForControlRelease = 2,
	};
}
