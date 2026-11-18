#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AITargetType_TypeDefinitionIndex = 44207;

	enum class AITargetType : ::System::Int32
	{
		LocalAvatar = 2,
		LockTarget = 1,
		Self = 0,
		Custom = 3,
	};
}
