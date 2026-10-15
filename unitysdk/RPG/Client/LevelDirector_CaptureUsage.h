#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class LevelDirector_CaptureUsage : ::System::Int32
	{
		None = 0,
		TurnPage = 1,
		FramBlend = 2,
		BattleResTransit = 4,
	};
}
