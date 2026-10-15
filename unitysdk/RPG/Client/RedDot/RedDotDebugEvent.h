#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::RedDot
{
	enum class RedDotDebugEvent : ::System::Int32
	{
		Subscribe = 0,
		Unsubscribe = 1,
		DirtyStateChanged = 2,
		LogicStateRefreshed = 3,
		ViewPathsReset = 4,
	};
}
