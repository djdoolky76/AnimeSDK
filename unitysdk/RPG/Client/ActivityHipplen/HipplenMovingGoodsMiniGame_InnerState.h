#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityHipplen
{
	enum class HipplenMovingGoodsMiniGame_InnerState : ::System::Int32
	{
		WaitingStart = 0,
		Gaming = 1,
		OnFinalPerformance = 2,
		Finished = 3,
	};
}
