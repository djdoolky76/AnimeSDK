#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	enum class LightShadowResolution : ::System::Int32
	{
		FromQualitySettings = -1,
		Low = 0,
		Medium = 1,
		High = 2,
		VeryHigh = 3,
	};
}
