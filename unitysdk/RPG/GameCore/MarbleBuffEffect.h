#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class MarbleBuffEffect : ::System::Int32
	{
		ChangeValue = 0,
		ActionCountToAttack = 1,
		ImmuneDamage = 2,
		TransferDamageToSource = 3,
		ForceLaunchToSource = 4,
	};
}
