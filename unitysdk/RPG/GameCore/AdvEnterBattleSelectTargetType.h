#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AdvEnterBattleSelectTargetType : ::System::Int32
	{
		Normal = 0,
		AllHitTarget = 1,
		FirstHitTarget = 2,
	};
}
