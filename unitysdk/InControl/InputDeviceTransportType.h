#pragma once
#include "unitysdk/unitysdk.h"

namespace InControl
{
	enum class InputDeviceTransportType : ::System::UInt16
	{
		Unknown = 0,
		USB = 1,
		Bluetooth = 2,
	};
}
