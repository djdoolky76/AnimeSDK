#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PauseRegionManagerReason_TypeDefinitionIndex = 63594;

	enum class PauseRegionManagerReason : ::System::Int32
	{
		Default = 0,
		Puzzle = 1,
		LeaveDefaultArea = 2,
		FiveDim = 3,
		RollerCoaster = 4,
	};
}
