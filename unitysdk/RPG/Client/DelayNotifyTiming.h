#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class DelayNotifyTiming : ::System::Int32
	{
		AdvEntered = 0,
		AdvHideLoadingPage = 1,
	};
}
