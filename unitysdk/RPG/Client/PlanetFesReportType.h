#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class PlanetFesReportType : ::System::Int32
	{
		BusinessDayFinish = 1,
		FesLevelUp = 2,
		MainPageClose = 3,
	};
}
