#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class PropSteerTarget : ::System::Int32
	{
		Angle = 0,
		Target = 1,
		FollowTarget = 2,
		FollowTargetWithThreshold = 3,
	};
}
