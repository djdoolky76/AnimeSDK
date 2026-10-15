#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::Timeline
{
	enum class PauseTimelineReason : ::System::Int32
	{
		Default = 1,
		LockModule = 2,
		PerformanceSimpleTalk = 4,
		PerformanceDebate = 8,
		PerformanceGamePlay = 16,
		PerformanceScreenTransfer = 32,
	};
}
