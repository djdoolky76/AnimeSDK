#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class MotionVectorGenerationMode : ::System::Int32
	{
		Camera = 0,
		Object = 1,
		ForceNoMotion = 2,
	};
}
