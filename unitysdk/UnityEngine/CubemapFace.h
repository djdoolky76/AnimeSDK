#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class CubemapFace : ::System::Int32
	{
		Unknown = -1,
		PositiveX = 0,
		NegativeX = 1,
		PositiveY = 2,
		NegativeY = 3,
		PositiveZ = 4,
		NegativeZ = 5,
	};
}
