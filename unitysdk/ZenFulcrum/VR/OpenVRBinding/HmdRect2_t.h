#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdVector2_t.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	struct alignas(4) HmdRect2_t
	{
		::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t vTopLeft; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::HmdVector2_t vBottomRight; // 0x18
	};
}
