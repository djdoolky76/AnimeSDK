#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	enum class SSGIRayMarchingMethod : ::System::Int32
	{
		Compute = 0,
		HorizontalVisibilityMask = 1,
	};
}
