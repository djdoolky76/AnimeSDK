#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class GridFightPrayQuest_QuestStatus : ::System::Int32
	{
		Local = 0,
		InProgress = 1,
		Complete = 2,
		Clear = 3,
	};
}
