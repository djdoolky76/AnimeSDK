#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	struct alignas(4) VREvent_Screenshot_t
	{
		::System::UInt32 handle; // 0x10
		::System::UInt32 type; // 0x14
	};
}
