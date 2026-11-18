#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int WanderMove_MoveState_TypeDefinitionIndex = 63428;

	enum class WanderMove_MoveState : ::System::Int32
	{
		Error = 4,
		SelectPoint = 0,
		End = 3,
		Stay = 2,
		Moving = 1,
	};
}
