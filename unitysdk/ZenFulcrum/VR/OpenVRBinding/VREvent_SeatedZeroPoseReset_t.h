#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VREvent_SeatedZeroPoseReset_t_TypeDefinitionIndex = 39295;

	struct alignas(4) VREvent_SeatedZeroPoseReset_t
	{
		::System::Boolean bResetBySystemMenu; // 0x10
	};
}
