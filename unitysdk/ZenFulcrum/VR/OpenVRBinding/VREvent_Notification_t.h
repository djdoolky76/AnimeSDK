#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	struct alignas(4) VREvent_Notification_t
	{
		::System::UInt64 ulUserValue; // 0x10
		::System::UInt32 notificationId; // 0x18
	};
}
