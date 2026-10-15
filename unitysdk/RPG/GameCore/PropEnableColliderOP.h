#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class PropEnableColliderOP : ::System::Int32
	{
		ColliderAndTrigger = 0,
		ColliderOnly = 1,
		TriggerOnly = 2,
	};
}
