#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class PreReleaseScheduleState : ::System::Int32
	{
		None = 0,
		NotStarted = 1,
		InSchedule = 2,
		Expired = 3,
	};
}
