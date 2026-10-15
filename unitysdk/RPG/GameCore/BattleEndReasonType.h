#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class BattleEndReasonType : ::System::Int32
	{
		None = 0,
		AllDie = 1,
		TimeLimit = 2,
	};
}
