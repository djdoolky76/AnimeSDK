#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VREvent_Ipd_t_TypeDefinitionIndex = 40220;

	struct alignas(4) VREvent_Ipd_t
	{
		::System::Single ipdMeters; // 0x10
	};
}
