#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI
{
	enum class GraphicRaycaster_BlockingObjects : ::System::Int32
	{
		None = 0,
		TwoD = 1,
		ThreeD = 2,
		All = 3,
	};
}
