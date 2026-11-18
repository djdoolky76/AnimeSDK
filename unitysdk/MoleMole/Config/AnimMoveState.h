#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimMoveState_TypeDefinitionIndex = 81751;

	enum class AnimMoveState : ::System::Int32
	{
		Run = 0,
		Walk = 1,
	};
}
