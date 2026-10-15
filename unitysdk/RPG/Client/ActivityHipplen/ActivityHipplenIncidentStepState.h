#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityHipplen
{
	enum class ActivityHipplenIncidentStepState : ::System::Int32
	{
		None = 0,
		Ready = 1,
		Running = 2,
		Completed = 3,
		Stopped = 4,
	};
}
