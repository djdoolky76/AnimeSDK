#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class SmoothFollowType : ::System::Int32
	{
		Lerp = 0,
		Linear = 1,
		Damp = 2,
		DampExp = 3,
	};
}
