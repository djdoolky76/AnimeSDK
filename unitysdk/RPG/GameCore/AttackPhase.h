#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AttackPhase : ::System::Int32
	{
		None = 0,
		Attacking = 1,
		AfterAttack = 2,
		AttackFinish = 3,
	};
}
