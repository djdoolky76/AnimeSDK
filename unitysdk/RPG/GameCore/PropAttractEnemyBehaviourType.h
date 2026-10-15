#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class PropAttractEnemyBehaviourType : ::System::Int32
	{
		AlertToGuard = 0,
		AlertToMax = 1,
		AlertAddDelta = 2,
		AlertAddTo = 3,
		AlertSetTo = 4,
	};
}
