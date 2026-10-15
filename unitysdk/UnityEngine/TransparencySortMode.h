#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class TransparencySortMode : ::System::Int32
	{
		Default = 0,
		Perspective = 1,
		Orthographic = 2,
		CustomAxis = 3,
	};
}
