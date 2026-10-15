#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimLadderClimbSlide_TypeDefinitionIndex = 18542;

	enum class FiveDimLadderClimbSlide : ::System::UInt32
	{
		None = 0,
		Left = 1,
		Right = 2,
		Both = 3,
	};
}
