#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::NavMap
{
	enum class WaypointRefreshReason : ::System::Int32
	{
		Invalid = 0,
		EdgeEnableConditionChanged = 1,
	};
}
