#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int PlayerOnViewState_TypeDefinitionIndex = 40028;

	enum class PlayerOnViewState : ::System::Byte
	{
		Born = 1,
		JumpMove = 8,
		LF = 3,
		Teleport = 2,
		RT = 4,
		None = 0,
		TeleportOut = 7,
		UP = 5,
		BM = 6,
		MoveFail = 9,
	};
}
