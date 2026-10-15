#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class PerformActionType : ::System::Int32
	{
		Unknown = 0,
		FlyToPlayer = 1,
		FlyToTargetEntity = 2,
		FlyToTargetGO = 3,
	};
}
