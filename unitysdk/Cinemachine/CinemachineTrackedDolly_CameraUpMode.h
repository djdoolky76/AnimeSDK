#pragma once
#include "unitysdk/unitysdk.h"

namespace Cinemachine
{
	enum class CinemachineTrackedDolly_CameraUpMode : ::System::Int32
	{
		Default = 0,
		Path = 1,
		PathNoRoll = 2,
		FollowTarget = 3,
		FollowTargetNoRoll = 4,
	};
}
