#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class BillboardWayPointMutexStatus : ::System::Int32
	{
		WayPointOpen = 0,
		BillboardShow = 1,
	};
}
