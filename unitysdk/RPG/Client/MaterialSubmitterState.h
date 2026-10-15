#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class MaterialSubmitterState : ::System::Int32
	{
		Closed = 0,
		Hidden = 1,
		Shown = 2,
		Started = 3,
		Unlocked = 4,
		Submitted = 5,
		Finished = 6,
	};
}
