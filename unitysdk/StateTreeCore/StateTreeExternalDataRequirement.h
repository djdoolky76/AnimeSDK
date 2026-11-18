#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeExternalDataRequirement_TypeDefinitionIndex = 31138;

	enum class StateTreeExternalDataRequirement : ::System::Byte
	{
		Required = 0,
		Optional = 1,
	};
}
