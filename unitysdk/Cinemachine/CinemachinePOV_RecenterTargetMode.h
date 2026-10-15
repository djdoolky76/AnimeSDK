#pragma once
#include "unitysdk/unitysdk.h"

namespace Cinemachine
{
	enum class CinemachinePOV_RecenterTargetMode : ::System::Int32
	{
		None = 0,
		FollowTargetForward = 1,
		LookAtTargetForward = 2,
	};
}
