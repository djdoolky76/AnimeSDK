#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	struct alignas(4) VREvent_Process_t
	{
		::System::UInt32 pid; // 0x10
		::System::UInt32 oldPid; // 0x14
		::System::Boolean bForced; // 0x18
	};
}
