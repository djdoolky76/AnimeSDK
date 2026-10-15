#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	struct alignas(4) VREvent_Reserved_t
	{
		::System::UInt64 reserved0; // 0x10
		::System::UInt64 reserved1; // 0x18
	};
}
