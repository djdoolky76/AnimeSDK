#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools
{
	enum class DeviceUtils_BatteryStatus : ::System::Int32
	{
		Unknown = 0,
		Charging = 1,
		DisCharging = 2,
		NotCharging = 3,
		Full = 4,
	};
}
