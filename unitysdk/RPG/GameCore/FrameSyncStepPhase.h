#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class FrameSyncStepPhase : ::System::Int32
	{
		None = 0,
		PreStepAction = 1,
		ExecuteOp = 2,
		PosStepAction = 3,
	};
}
