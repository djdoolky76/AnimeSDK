#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimAvatarMoveAbility_TypeDefinitionIndex = 16707;

	enum class FiveDimAvatarMoveAbility : ::System::UInt32
	{
		None = 0,
		Ladder = 1,
		Slide = 2,
		DropOneSidePass = 4,
	};
}
