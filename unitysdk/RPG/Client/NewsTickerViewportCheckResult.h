#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class NewsTickerViewportCheckResult : ::System::Int32
	{
		Inside = 0,
		BeforeMoveIn = 1,
		AfterMoveOut = 2,
	};
}
