#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class ManaVideoPlayerPauseReason : ::System::Int32
	{
		Default = 0,
		EndPause = 1,
		PerformanceTimeScaleLock = 2,
		TalkBackgroundCGPauseClip = 3,
	};
}
