#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class ExpeditionBattleRecommendAvatarState : ::System::Int32
	{
		None = 0,
		Trial = 1,
		NotOwned = 2,
	};
}
