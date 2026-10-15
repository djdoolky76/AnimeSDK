#pragma once
#include "unitysdk/unitysdk.h"

namespace Cinemachine
{
	enum class CinemachineVirtualCameraBase_StandbyUpdateMode : ::System::Int32
	{
		Never = 0,
		Always = 1,
		RoundRobin = 2,
	};
}
