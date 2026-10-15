#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class IsometricViewPuzzleEvent : ::System::UInt32
	{
		EnterAttachRegion = 0,
		LeaveAttachRegion = 1,
		ReleaseInAttachRegion = 2,
		CameraZoomIn = 3,
		CameraZoomOut = 4,
	};
}
