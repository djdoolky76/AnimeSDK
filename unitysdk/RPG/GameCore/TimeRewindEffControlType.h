#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class TimeRewindEffControlType : ::System::Int32
	{
		TriggerNewEffect = 0,
		UseCurrentEff = 1,
		UseCurrentBackwardEff = 2,
	};
}
