#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class LogicStateType : ::System::Int32
	{
		Idle = 0,
		InPerformance = 1,
		InWanfa_LIANJI = 2,
	};
}
