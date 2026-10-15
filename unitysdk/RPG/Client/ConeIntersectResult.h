#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class ConeIntersectResult : ::System::Int32
	{
		Intersect = 0,
		Inside = 1,
		Outside = 2,
	};
}
