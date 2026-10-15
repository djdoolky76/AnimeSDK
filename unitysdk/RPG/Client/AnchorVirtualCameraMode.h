#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class AnchorVirtualCameraMode : ::System::Int32
	{
		TownExit = 0,
		LookAtPhone = 1,
		LookAtProp = 2,
		Lift = 3,
	};
}
