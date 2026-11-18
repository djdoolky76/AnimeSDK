#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int PinballSubsystem_PendingContactAbilityPhase_TypeDefinitionIndex = 56735;

	enum class PinballSubsystem_PendingContactAbilityPhase : ::System::Byte
	{
		Exit = 1,
		Enter = 0,
		TriggerEnter = 3,
		PaddleEject = 2,
	};
}
