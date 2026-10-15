#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class ParticleSystemCullingMode : ::System::Int32
	{
		Automatic = 0,
		PauseAndCatchup = 1,
		Pause = 2,
		AlwaysSimulate = 3,
	};
}
