#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	struct alignas(4) IntersectionMaskCircle_t
	{
		::System::Single m_flCenterX; // 0x10
		::System::Single m_flCenterY; // 0x14
		::System::Single m_flRadius; // 0x18
	};
}
