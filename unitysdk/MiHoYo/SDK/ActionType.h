#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	enum class ActionType : ::System::Int32
	{
		Click = 0,
		Impression = 1,
		Pageview = 2,
		Pagehide = 3,
		Refresh = 4,
		Loadmore = 5,
	};
}
