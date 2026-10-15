#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class GuardingState : ::System::Int32
	{
		Search = 0,
		GuardAtTarget = 1,
	};
}
