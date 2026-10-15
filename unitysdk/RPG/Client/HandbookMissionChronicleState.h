#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class HandbookMissionChronicleState : ::System::Int32
	{
		None = 0,
		WorldLocked = 1,
		Undiscovered = 2,
		Locked = 3,
		Available = 4,
		InProgress = 5,
		Finished = 6,
	};
}
