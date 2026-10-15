#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	struct alignas(4) VREvent_Chaperone_t
	{
		::System::UInt64 m_nPreviousUniverse; // 0x10
		::System::UInt64 m_nCurrentUniverse; // 0x18
	};
}
