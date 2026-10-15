#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	enum class EVRNotificationType : ::System::Int32
	{
		Transient = 0,
		Persistent = 1,
		Transient_SystemWithUserValue = 2,
	};
}
