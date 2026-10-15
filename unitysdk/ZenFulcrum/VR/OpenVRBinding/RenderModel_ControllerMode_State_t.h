#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	struct alignas(4) RenderModel_ControllerMode_State_t
	{
		::System::Boolean bScrollWheelVisible; // 0x10
	};
}
