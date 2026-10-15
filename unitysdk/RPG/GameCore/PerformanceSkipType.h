#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class PerformanceSkipType : ::System::Int32
	{
		Never = 0,
		AfterSeen = 1,
		Always = 2,
	};
}
