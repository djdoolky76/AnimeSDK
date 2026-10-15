#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class CostMpPhase : ::System::Int32
	{
		OnUse = 0,
		OnHitEnemy = 1,
		OnFirstHitEnemy = 2,
	};
}
