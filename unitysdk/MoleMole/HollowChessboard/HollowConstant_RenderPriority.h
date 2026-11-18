#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowConstant_RenderPriority_TypeDefinitionIndex = 44605;

	enum class HollowConstant_RenderPriority : ::System::Int32
	{
		Npc = 1,
		NonInteract = 4,
		Default = 0,
		GridEvent = 3,
		Player = 2,
		InteractMovie = 5,
		InteractSecondaryMovie = 6,
	};
}
