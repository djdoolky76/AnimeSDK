#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools
{
	enum class DeviceUtils_WifiState : ::System::Int32
	{
		Disabling = 0,
		Disabled = 1,
		Enabling = 2,
		Enabled = 3,
		Unknown = 4,
	};
}
