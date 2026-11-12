#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VREvent_Overlay_t_TypeDefinitionIndex = 40217;

	struct alignas(4) VREvent_Overlay_t
	{
		::System::UInt64 overlayHandle; // 0x10
	};
}
