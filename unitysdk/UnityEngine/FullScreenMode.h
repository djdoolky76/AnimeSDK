#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class FullScreenMode : ::System::Int32
	{
		ExclusiveFullScreen = 0,
		FullScreenWindow = 1,
		MaximizedWindow = 2,
		Windowed = 3,
	};
}
