#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class LineupRecommendationType : ::System::Int32
	{
		None = 0,
		Challenge = 1,
		LocalLegend = 2,
		ChallengePeakNormal = 3,
		ChallengePeakBoss = 4,
		ChallengeTierce = 5,
		ExpeditionBattle = 6,
	};
}
