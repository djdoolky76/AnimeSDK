#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Timeline
{
	enum class MatchTargetFields : ::System::Int32
	{
		PositionX = 1,
		PositionY = 2,
		PositionZ = 4,
		RotationX = 8,
		RotationY = 16,
		RotationZ = 32,
	};
}
