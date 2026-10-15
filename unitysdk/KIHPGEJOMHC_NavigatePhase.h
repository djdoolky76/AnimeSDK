#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int KIHPGEJOMHC_NavigatePhase_TypeDefinitionIndex = 53084;

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
