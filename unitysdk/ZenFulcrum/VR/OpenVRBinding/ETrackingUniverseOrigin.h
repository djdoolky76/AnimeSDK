#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	enum class ETrackingUniverseOrigin : ::System::Int32
	{
		TrackingUniverseSeated = 0,
		TrackingUniverseStanding = 1,
		TrackingUniverseRawAndUncalibrated = 2,
	};
}
