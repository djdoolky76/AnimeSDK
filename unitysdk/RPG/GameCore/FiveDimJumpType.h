#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimJumpType_TypeDefinitionIndex = 16825;

	enum class FiveDimJumpType : ::System::UInt32
	{
		Jump = 1,
		WallJump = 2,
		Flip = 4,
	};
}
