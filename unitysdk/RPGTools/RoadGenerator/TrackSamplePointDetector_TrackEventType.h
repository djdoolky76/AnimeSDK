#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::RoadGenerator
{
	inline static constexpr unsigned int TrackSamplePointDetector_TrackEventType_TypeDefinitionIndex = 49925;

	enum class TrackSamplePointDetector_TrackEventType : ::System::Int32
	{
		CustomString = 0,
		CameraSwitch = 1,
		FollowCameraFov = 2,
	};
}
