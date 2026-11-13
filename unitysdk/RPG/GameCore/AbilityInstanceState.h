#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityInstanceState_TypeDefinitionIndex = 55564;

	enum class AbilityInstanceState : ::System::Int32
	{
		EUnkonw = 0,
		Ready = 1,
		Executing = 2,
	};
}
