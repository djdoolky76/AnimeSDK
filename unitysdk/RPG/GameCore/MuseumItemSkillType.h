#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class MuseumItemSkillType : ::System::Int32
	{
		Unknown = 0,
		GainFunds = 1,
		StatsNeedIncAbs = 2,
		StatsNeedDecAbs = 3,
		StatsNeedIncPercent = 4,
		StatsNeedDecPercent = 5,
		BaseStatsIncPercent = 6,
	};
}
