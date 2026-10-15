#pragma once
#include "unitysdk/unitysdk.h"
	enum class KIHPGEJOMHC_NavigatePhase : ::System::Int32
	{
		None = 0,
		SelectRandomPoint = 1,
		AdvanceFrontRoute = 2,
		SwitchMemberFrontMover = 3,
		Navigating = 4,
		RetryDelay = 5,
		PauseBetweenStrolls = 6,
		FinalStrollPause = 7,
		AwaitStrictStandby = 8,
	};
