#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class BatteryStatus : ::System::Int32
	{
		Unknown = 0,
		Charging = 1,
		Discharging = 2,
		NotCharging = 3,
		Full = 4,
	};
}
