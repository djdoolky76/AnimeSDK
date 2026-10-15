#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefReportFromUIType_TypeDefinitionIndex = 59975;

	enum class RogueTournBuildRefReportFromUIType : ::System::UInt32
	{
		RecomTab = 0,
		AllTab = 1,
		HistoryDialog = 2,
		SwitchOnDetailDialog = 3,
		Debug = 4,
		FavoriteTab = 5,
	};
}
