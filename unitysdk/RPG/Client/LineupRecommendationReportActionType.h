#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class LineupRecommendationReportActionType : ::System::Int32
	{
		OpenTab = 1,
		ChangeShowOwnership = 2,
		RefreshRecommend = 3,
	};
}
