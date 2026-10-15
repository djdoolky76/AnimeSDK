#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder
{
	enum class BezierTangentMode : ::System::Int32
	{
		Free = 0,
		Aligned = 1,
		Mirrored = 2,
	};
}
