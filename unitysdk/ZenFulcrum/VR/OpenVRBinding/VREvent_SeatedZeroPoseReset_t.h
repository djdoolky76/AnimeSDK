#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	struct alignas(4) VREvent_SeatedZeroPoseReset_t
	{
		::System::Boolean bResetBySystemMenu; // 0x10
	};
}
