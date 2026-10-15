#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
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
