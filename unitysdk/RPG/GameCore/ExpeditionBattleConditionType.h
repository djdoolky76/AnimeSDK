#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ExpeditionBattleConditionType : ::System::Int32
	{
		None = 0,
		GreaterEqual = 1,
		LessEqual = 2,
	};
}
