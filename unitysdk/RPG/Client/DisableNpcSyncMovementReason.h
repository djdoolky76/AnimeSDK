#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class DisableNpcSyncMovementReason : ::System::Int32
	{
		Task = 0,
		Die = 1,
	};
}
