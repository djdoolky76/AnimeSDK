#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraPageState_TypeDefinitionIndex = 63416;

	enum class ChimeraPageState : ::System::UInt32
	{
		None = 0,
		Entrance = 1,
		Goals = 2,
		NewMembers = 3,
		Arrangement = 4,
		Evaluation = 5,
	};
}
