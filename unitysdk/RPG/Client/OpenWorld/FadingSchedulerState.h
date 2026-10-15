#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	enum class FadingSchedulerState : ::System::Int32
	{
		PendingAdd = 0,
		Active = 1,
		ResolvingImmediateFinish = 2,
		Ticking = 3,
		PendingRemove = 4,
		Removed = 5,
	};
}
