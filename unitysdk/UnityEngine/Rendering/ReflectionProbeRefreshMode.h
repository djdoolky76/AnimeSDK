#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	enum class ReflectionProbeRefreshMode : ::System::Int32
	{
		OnAwake = 0,
		EveryFrame = 1,
		ViaScripting = 2,
	};
}
