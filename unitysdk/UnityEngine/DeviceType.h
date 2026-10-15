#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class DeviceType : ::System::Int32
	{
		Unknown = 0,
		Handheld = 1,
		Console = 2,
		Desktop = 3,
	};
}
