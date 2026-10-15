#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Timeline
{
	enum class TimelineClip_Versions : ::System::Int32
	{
		Initial = 0,
		ClipInFromGlobalToLocal = 1,
	};
}
