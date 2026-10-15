#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityAlley
{
	enum class AlleyPackAnchorState : ::System::Int32
	{
		None = 0,
		Available = 1,
		Occupied = 2,
		Disable = 3,
		WaitingAttach = 4,
	};
}
