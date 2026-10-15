#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::NVIDIA
{
	enum class DLSSQuality : ::System::Int32
	{
		MaximumQuality = 2,
		Balanced = 1,
		MaximumPerformance = 0,
		UltraPerformance = 3,
	};
}
