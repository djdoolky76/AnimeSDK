#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ChimeraWorkRoundOptionType : ::System::Int32
	{
		None = 0,
		RequireMemberCount = 1,
		RequireDifferentArrangement = 2,
		LockLeader = 3,
		FinishAllSubMission = 4,
		FinishAnySubMission = 5,
		RoundWorkCountMin = 6,
	};
}
