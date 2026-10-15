#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class RigidbodyInterpolation : ::System::Int32
	{
		None = 0,
		Interpolate = 1,
		Extrapolate = 2,
	};
}
