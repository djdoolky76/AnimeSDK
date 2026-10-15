#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AdvSupportedColliderLayer : ::System::Int32
	{
		StageColliderLayer = 0,
		CameraColliderLayer = 1,
		AirWallColliderLayer = 2,
	};
}
