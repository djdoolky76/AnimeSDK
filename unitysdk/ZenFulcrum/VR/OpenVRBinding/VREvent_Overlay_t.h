#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	struct alignas(4) VREvent_Overlay_t
	{
		::System::UInt64 overlayHandle; // 0x10
	};
}
