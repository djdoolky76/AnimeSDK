#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class FiveDimPlayerResetMode : ::System::Int32
	{
		LastStableGround = 0,
		CameraViewPort = 1,
	};
}
