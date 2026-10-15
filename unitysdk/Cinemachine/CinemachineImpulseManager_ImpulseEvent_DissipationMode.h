#pragma once
#include "unitysdk/unitysdk.h"

namespace Cinemachine
{
	enum class CinemachineImpulseManager_ImpulseEvent_DissipationMode : ::System::Int32
	{
		LinearDecay = 0,
		SoftDecay = 1,
		ExponentialDecay = 2,
	};
}
