#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class StageBattleEventType : ::System::Int32
	{
		None = 0,
		Buff = 1,
		Debuff = 2,
	};
}
