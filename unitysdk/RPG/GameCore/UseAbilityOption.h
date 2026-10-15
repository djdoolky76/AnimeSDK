#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class UseAbilityOption : ::System::UInt32
	{
		None = 0,
		ParallelExecuting = 1,
		PrepareAbility = 2,
		UseInSkill = 4,
	};
}
