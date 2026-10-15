#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::B51Racing
{
	enum class UIShowPhase : ::System::Int32
	{
		Shown = 0,
		Showing = 1,
		Hidden = 2,
		Hiding = 3,
	};
}
