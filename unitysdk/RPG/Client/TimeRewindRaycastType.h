#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class TimeRewindRaycastType : ::System::Int32
	{
		Sphere = 0,
		Box = 1,
		Capsule = 2,
	};
}
