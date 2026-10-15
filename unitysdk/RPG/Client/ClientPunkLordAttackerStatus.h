#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class ClientPunkLordAttackerStatus : ::System::Int32
	{
		None = 0,
		Attacked = 1,
		Attacking = 2,
		AttackedAndAttacking = 3,
	};
}
