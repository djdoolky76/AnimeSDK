#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ForbidSelectTimeRewindReason : ::System::Int32
	{
		Task = 0,
		Skill = 1,
		GamePlayBtnCompetition = 2,
	};
}
