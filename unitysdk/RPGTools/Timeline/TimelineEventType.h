#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::Timeline
{
	enum class TimelineEventType : ::System::Int32
	{
		SetTargetTransform = 0,
		HeightLimited = 1,
		ProcedureBehavior = 2,
	};
}
