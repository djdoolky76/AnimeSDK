#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AITakenDamageStatisticType : ::System::Int32
	{
		SinceOwnerLastAction = 0,
		SinceOwnerCreated = 1,
		SinceTargetCreated = 2,
	};
}
