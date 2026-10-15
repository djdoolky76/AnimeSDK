#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	enum class ReflectionProbeMode : ::System::Int32
	{
		Baked = 0,
		Realtime = 1,
		Custom = 2,
	};
}
