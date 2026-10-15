#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	struct alignas(4) VREvent_Mouse_t
	{
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::System::UInt32 button; // 0x18
	};
}
