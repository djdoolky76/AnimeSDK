#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class QuestType : ::System::Int32
	{
		Unknown = 0,
		Linear = 1,
		Timed = 2,
		Cycle = 3,
		Achievement = 4,
		Daily = 5,
	};
}
