#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int PatrolMove_MoveState_TypeDefinitionIndex = 89320;

	enum class PatrolMove_MoveState : ::System::Int32
	{
		MoveStart = 0,
		End = 3,
		Error = 4,
		Moving = 1,
		Stay = 2,
	};
}
