#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class RenderMode : ::System::Int32
	{
		ScreenSpaceOverlay = 0,
		ScreenSpaceCamera = 1,
		WorldSpace = 2,
	};
}
