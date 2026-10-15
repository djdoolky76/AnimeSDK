#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class DialogueGroupType : ::System::Int32
	{
		LockInteraction = 0,
		Free = 1,
		JsonGraph = 2,
		Phases = 3,
		Simple = 4,
	};
}
