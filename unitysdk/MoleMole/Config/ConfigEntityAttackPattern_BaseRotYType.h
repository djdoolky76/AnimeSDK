#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAttackPattern_BaseRotYType_TypeDefinitionIndex = 52065;

	enum class ConfigEntityAttackPattern_BaseRotYType : ::System::Int32
	{
		EntityTransform = 0,
		AttachPoint = 1,
	};
}
