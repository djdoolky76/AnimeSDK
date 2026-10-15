#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityHipplen
{
	enum class ActivityHipplenInteractController_InnerState : ::System::Int32
	{
		None = 0,
		Interacting = 1,
		FinalInteract = 2,
		FinalPerformance = 3,
		Completed = 4,
	};
}
