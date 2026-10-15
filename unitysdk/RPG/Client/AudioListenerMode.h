#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class AudioListenerMode : ::System::Int32
	{
		None = 0,
		Following = 1,
		Camera = 2,
		CameraWithinDist = 3,
		FollowingWithDirect = 4,
	};
}
