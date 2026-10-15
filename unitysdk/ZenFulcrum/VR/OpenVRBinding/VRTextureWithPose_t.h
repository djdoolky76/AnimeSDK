#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdMatrix34_t.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	struct alignas(4) VRTextureWithPose_t
	{
		::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t mDeviceToAbsoluteTracking; // 0x10
	};
}
