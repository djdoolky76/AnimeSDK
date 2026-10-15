#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	enum class VisibleLightFlags : ::System::Int32
	{
		IntersectsNearPlane = 1,
		IntersectsFarPlane = 2,
	};
}
