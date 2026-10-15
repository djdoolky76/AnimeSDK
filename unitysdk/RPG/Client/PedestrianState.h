#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class PedestrianState : ::System::Int32
	{
		None = 0,
		Born = 1,
		Walk = 2,
		LineUp = 3,
		Disapper = 4,
		Destroy = 5,
	};
}
