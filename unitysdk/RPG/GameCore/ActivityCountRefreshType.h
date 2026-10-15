#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ActivityCountRefreshType : ::System::Int32
	{
		NoRefresh = 0,
		DailyRefresh = 1,
		DailyAccumulateRefresh = 2,
	};
}
