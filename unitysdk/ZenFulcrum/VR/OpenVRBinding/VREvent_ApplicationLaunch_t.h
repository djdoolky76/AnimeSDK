#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	struct alignas(4) VREvent_ApplicationLaunch_t
	{
		::System::UInt32 pid; // 0x10
		::System::UInt32 unArgsHandle; // 0x14
	};
}
