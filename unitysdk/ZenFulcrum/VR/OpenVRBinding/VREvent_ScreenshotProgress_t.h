#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	struct alignas(4) VREvent_ScreenshotProgress_t
	{
		::System::Single progress; // 0x10
	};
}
