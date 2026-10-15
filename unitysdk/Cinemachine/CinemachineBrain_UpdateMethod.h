#pragma once
#include "unitysdk/unitysdk.h"

namespace Cinemachine
{
	enum class CinemachineBrain_UpdateMethod : ::System::Int32
	{
		FixedUpdate = 0,
		LateUpdate = 1,
		SmartUpdate = 2,
		ManualUpdate = 3,
	};
}
