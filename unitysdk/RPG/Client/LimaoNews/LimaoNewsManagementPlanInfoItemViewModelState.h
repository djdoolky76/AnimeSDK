#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LimaoNews
{
	enum class LimaoNewsManagementPlanInfoItemViewModelState : ::System::Int32
	{
		None = 0,
		Start = 1,
		InPlanStart = 2,
		InPlanOngoing = 3,
		InPlanResult = 4,
		WaitNextPlanPhase = 5,
		End = 6,
		Finished = 7,
		Lock = 8,
	};
}
