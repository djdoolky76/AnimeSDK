#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	enum class ShadowCastingMode : ::System::Int32
	{
		Off = 0,
		On = 1,
		TwoSided = 2,
		ShadowsOnly = 3,
	};
}
