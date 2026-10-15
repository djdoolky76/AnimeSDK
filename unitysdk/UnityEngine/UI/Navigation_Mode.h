#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI
{
	enum class Navigation_Mode : ::System::Int32
	{
		None = 0,
		Horizontal = 1,
		Vertical = 2,
		Automatic = 3,
		Explicit = 4,
	};
}
