#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::NVIDIA
{
	enum class DLSSFeatureFlags : ::System::Int32
	{
		None = 0,
		IsHDR = 1,
		MVLowRes = 2,
		MVJittered = 4,
		DepthInverted = 8,
		DoSharpening = 16,
	};
}
