#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	enum class LightProbeUsage : ::System::Int32
	{
		Off = 0,
		BlendProbes = 1,
		UseProxyVolume = 2,
		CustomProvided = 4,
	};
}
