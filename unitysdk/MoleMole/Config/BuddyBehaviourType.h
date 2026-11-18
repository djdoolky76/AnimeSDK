#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int BuddyBehaviourType_TypeDefinitionIndex = 59290;

	enum class BuddyBehaviourType : ::System::Int32
	{
		Free = 1,
		Guide = 2,
		Resurrection = 4,
		Interactive = 3,
	};
}
