#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class VRTextureUsage : ::System::Int32
	{
		None = 0,
		OneEye = 1,
		TwoEyes = 2,
		DeviceSpecific = 3,
	};
}
