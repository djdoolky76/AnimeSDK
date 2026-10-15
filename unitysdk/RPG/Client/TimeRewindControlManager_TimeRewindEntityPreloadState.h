#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class TimeRewindControlManager_TimeRewindEntityPreloadState : ::System::Int32
	{
		Unload = 0,
		Loading = 1,
		Loaded = 2,
		LoadFailed = 3,
	};
}
