#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::Rendering
{
	enum class RayTracingMode : ::System::Int32
	{
		Off = 0,
		Static = 1,
		DynamicTransform = 2,
		DynamicGeometry = 3,
	};
}
