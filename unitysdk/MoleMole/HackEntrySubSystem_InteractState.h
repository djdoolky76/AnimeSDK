#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int HackEntrySubSystem_InteractState_TypeDefinitionIndex = 70992;

	enum class HackEntrySubSystem_InteractState : ::System::Int32
	{
		None = 0,
		InteractSuccess = 2,
		Interacting = 1,
	};
}
