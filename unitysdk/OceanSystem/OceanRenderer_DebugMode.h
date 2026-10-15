#pragma once
#include "unitysdk/unitysdk.h"

namespace OceanSystem
{
	enum class OceanRenderer_DebugMode : ::System::Int32
	{
		None = 0,
		BaseColor = 1,
		Foam = 2,
		SubsurfaceScattering = 3,
		Refraction = 4,
		SSR = 5,
		EnvironmentReflection = 6,
	};
}
