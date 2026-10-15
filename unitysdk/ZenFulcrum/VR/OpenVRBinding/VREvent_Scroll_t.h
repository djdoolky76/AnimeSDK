#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	struct alignas(4) VREvent_Scroll_t
	{
		::System::Single xdelta; // 0x10
		::System::Single ydelta; // 0x14
		::System::UInt32 repeatCount; // 0x18
	};
}
