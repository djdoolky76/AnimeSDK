#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	enum class DistanceMetric : ::System::Int32
	{
		Perspective = 0,
		Orthographic = 1,
		CustomAxis = 2,
	};
}
