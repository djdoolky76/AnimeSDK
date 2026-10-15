#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class ExpeditionBattleRouteState : ::System::Int32
	{
		Alive = 0,
		Failed = 1,
		Inactive = 2,
	};
}
