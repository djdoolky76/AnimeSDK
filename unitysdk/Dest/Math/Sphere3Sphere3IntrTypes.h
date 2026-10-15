#pragma once
#include "unitysdk/unitysdk.h"

namespace Dest::Math
{
	enum class Sphere3Sphere3IntrTypes : ::System::Int32
	{
		Empty = 0,
		Point = 1,
		Circle = 2,
		Sphere0 = 3,
		Sphere0Point = 4,
		Sphere1 = 5,
		Sphere1Point = 6,
		Same = 7,
	};
}
