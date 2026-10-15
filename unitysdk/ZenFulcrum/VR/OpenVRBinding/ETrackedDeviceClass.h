#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	enum class ETrackedDeviceClass : ::System::Int32
	{
		Invalid = 0,
		HMD = 1,
		Controller = 2,
		GenericTracker = 3,
		TrackingReference = 4,
		DisplayRedirect = 5,
	};
}
