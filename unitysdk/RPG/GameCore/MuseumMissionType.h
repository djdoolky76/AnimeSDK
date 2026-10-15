#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class MuseumMissionType : ::System::Int32
	{
		None = 0,
		PerfectTurn = 1,
		SingleTurnExp = 2,
		TurnsExp = 3,
		AreaLevel = 4,
		StuffCnt = 5,
		ExhibitCnt = 6,
	};
}
