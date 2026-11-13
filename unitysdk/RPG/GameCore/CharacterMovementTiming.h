#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterMovementTiming_TypeDefinitionIndex = 58172;

	enum class CharacterMovementTiming : ::System::Int32
	{
		Ignore = 0,
		LateUpdate = 1,
		AnimatorMove = 2,
	};
}
