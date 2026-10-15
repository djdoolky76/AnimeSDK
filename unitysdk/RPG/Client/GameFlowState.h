#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class GameFlowState : ::System::Int32
	{
		None = 0,
		Ready = 1,
		Running = 2,
		Destroyed = 3,
	};
}
