#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int DisableNpcSyncMovementReason_TypeDefinitionIndex = 75421;

	enum class DisableNpcSyncMovementReason : ::System::Int32
	{
		Task = 0,
		Die = 1,
	};
}
