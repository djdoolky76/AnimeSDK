#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int HmdQuaternion_t_TypeDefinitionIndex = 39271;

	struct alignas(4) HmdQuaternion_t
	{
		::System::Double w; // 0x10
		::System::Double x; // 0x18
		::System::Double y; // 0x20
		::System::Double z; // 0x28
	};
}
