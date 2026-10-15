#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class DepthTextureMode : ::System::Int32
	{
		None = 0,
		Depth = 1,
		DepthNormals = 2,
		MotionVectors = 4,
	};
}
