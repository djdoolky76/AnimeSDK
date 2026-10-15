#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	struct alignas(4) VREvent_PerformanceTest_t
	{
		::System::UInt32 m_nFidelityLevel; // 0x10
	};
}
