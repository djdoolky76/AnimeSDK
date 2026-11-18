#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowEntityMoveComponent_MoveCmd_Dir_TypeDefinitionIndex = 51413;

	enum class HollowEntityMoveComponent_MoveCmd_Dir : ::System::Int32
	{
		Reset = 5,
		Undo = 4,
		Right = 3,
		Left = 2,
		Up = 0,
		Transfer = 6,
		Down = 1,
	};
}
