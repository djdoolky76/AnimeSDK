#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	enum class ReflectionProbeUsage : ::System::Int32
	{
		Off = 0,
		BlendProbes = 1,
		BlendProbesAndSkybox = 2,
		Simple = 3,
	};
}
