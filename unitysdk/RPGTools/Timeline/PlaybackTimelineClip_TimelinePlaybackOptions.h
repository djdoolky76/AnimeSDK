#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::Timeline
{
	enum class PlaybackTimelineClip_TimelinePlaybackOptions : ::System::Int32
	{
		None = 0,
		Marker = 1,
		JumpToMaker = 2,
		JumpToTime = 3,
	};
}
