#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	enum class ShadowSamplingMode : ::System::Int32
	{
		CompareDepths = 0,
		RawDepth = 1,
		None = 2,
	};
}
