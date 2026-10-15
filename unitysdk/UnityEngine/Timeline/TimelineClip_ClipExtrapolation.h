#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Timeline
{
	enum class TimelineClip_ClipExtrapolation : ::System::Int32
	{
		None = 0,
		Hold = 1,
		Loop = 2,
		PingPong = 3,
		Continue = 4,
	};
}
