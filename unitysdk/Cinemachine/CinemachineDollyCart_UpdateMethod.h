#pragma once
#include "unitysdk/unitysdk.h"

namespace Cinemachine
{
	enum class CinemachineDollyCart_UpdateMethod : ::System::Int32
	{
		Update = 0,
		FixedUpdate = 1,
		LateUpdate = 2,
		ManualUpdate = 3,
	};
}
