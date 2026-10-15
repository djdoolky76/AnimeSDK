#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int IsometricViewPuzzleEvent_TypeDefinitionIndex = 60155;

	enum class IsometricViewPuzzleEvent : ::System::UInt32
	{
		EnterAttachRegion = 0,
		LeaveAttachRegion = 1,
		ReleaseInAttachRegion = 2,
		CameraZoomIn = 3,
		CameraZoomOut = 4,
	};
}
