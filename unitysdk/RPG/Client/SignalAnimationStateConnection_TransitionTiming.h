#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class SignalAnimationStateConnection_TransitionTiming : ::System::Int32
	{
		Immediate = 0,
		AfterAnimation = 1,
		AfterAnimationWithCondition = 2,
	};
}
