#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	enum class EVRFirmwareError : ::System::Int32
	{
		None = 0,
		Success = 1,
		Fail = 2,
	};
}
