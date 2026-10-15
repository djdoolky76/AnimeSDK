#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int HmdVector3d_t_TypeDefinitionIndex = 39269;

	struct alignas(4) HmdVector3d_t
	{
		::System::Double v0; // 0x10
		::System::Double v1; // 0x18
		::System::Double v2; // 0x20
	};
}
