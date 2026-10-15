#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AdventureAttackResult : ::System::Int32
	{
		None = 0,
		TriggerBattle = 1,
		DirectKill = 2,
	};
}
