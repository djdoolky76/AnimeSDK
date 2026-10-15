#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	struct alignas(4) HmdVector2_t
	{
		::System::Single v0; // 0x10
		::System::Single v1; // 0x14
	};
}
