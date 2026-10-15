#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class RtBattleSkillMoveState : ::System::Int32
	{
		None = 0,
		Wait = 1,
		Ready = 2,
		Finish = 3,
	};
}
