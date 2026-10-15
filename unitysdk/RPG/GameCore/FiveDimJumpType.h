#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class FiveDimJumpType : ::System::UInt32
	{
		Jump = 1,
		WallJump = 2,
		Flip = 4,
	};
}
