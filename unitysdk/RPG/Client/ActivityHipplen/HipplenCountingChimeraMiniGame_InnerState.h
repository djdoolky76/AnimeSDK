#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityHipplen
{
	enum class HipplenCountingChimeraMiniGame_InnerState : ::System::Int32
	{
		WaitingStart = 0,
		ChimeraPerformance = 1,
		AutoSelectAnswer = 2,
		WaitingSelectAnswer = 3,
		WaitingFinish = 4,
		Finished = 5,
	};
}
