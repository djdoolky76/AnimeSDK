#pragma once
#include "unitysdk/unitysdk.h"

namespace Cinemachine
{
	enum class CinemachineCollider_ResolutionStrategy : ::System::Int32
	{
		PullCameraForward = 0,
		PreserveCameraHeight = 1,
		PreserveCameraDistance = 2,
	};
}
