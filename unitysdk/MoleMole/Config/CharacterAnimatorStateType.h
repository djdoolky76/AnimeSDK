#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterAnimatorStateType_TypeDefinitionIndex = 68356;

	enum class CharacterAnimatorStateType : ::System::Int32
	{
		Floor = 2,
		Max = 3,
		Sky = 1,
		Ground = 0,
	};
}
