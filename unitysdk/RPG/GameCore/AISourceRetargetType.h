#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AISourceRetargetType : ::System::Int32
	{
		TopActionDelay = 0,
		TurnOwner = 1,
		TargetAndAdjoin = 2,
		TargetAndAdjoin2 = 3,
		AllTeamMember = 4,
		TargetAndServant = 5,
	};
}
