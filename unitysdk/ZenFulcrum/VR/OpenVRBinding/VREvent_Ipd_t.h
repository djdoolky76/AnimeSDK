#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	struct alignas(4) VREvent_Ipd_t
	{
		::System::Single ipdMeters; // 0x10
	};
}
