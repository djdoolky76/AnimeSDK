#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class EAlertState : ::System::Int32
	{
		Idle = 0,
		Guard = 1,
		Chase = 2,
	};
}
