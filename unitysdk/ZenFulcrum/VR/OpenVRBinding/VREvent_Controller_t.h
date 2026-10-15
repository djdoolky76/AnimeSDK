#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	struct alignas(4) VREvent_Controller_t
	{
		::System::UInt32 button; // 0x10
	};
}
