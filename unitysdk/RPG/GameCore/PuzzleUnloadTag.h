#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PuzzleUnloadTag_TypeDefinitionIndex = 57387;

	enum class PuzzleUnloadTag : ::System::Byte
	{
		None = 0,
		LOD = 1,
		Conflict = 2,
		MapRotation = 4,
		GroupVisibility = 8,
		EraFlipper = 16,
		FiveDim = 32,
	};
}
