#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class ForceMode : ::System::Int32
	{
		Force = 0,
		Acceleration = 5,
		Impulse = 1,
		VelocityChange = 2,
	};
}
