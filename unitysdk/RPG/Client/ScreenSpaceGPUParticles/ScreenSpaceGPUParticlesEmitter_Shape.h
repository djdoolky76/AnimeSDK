#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ScreenSpaceGPUParticles
{
	enum class ScreenSpaceGPUParticlesEmitter_Shape : ::System::Int32
	{
		None = 0,
		Cube = 1,
		Sphere = 2,
		Cylinder = 3,
	};
}
