#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class VortexParticlesBehavior_SpawnerState : ::System::Int32
	{
		Playing = 0,
		Paused = 1,
		Stopped = 2,
	};
}
