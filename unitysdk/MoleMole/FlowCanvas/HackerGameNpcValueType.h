#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameNpcValueType_TypeDefinitionIndex = 42251;

	enum class HackerGameNpcValueType : ::System::Int32
	{
		Reward = 2,
		None = 0,
		Damage = 3,
		FeverReward = 4,
		Health = 1,
	};
}
