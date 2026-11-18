#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeStateChangeType_TypeDefinitionIndex = 30976;

	enum class StateTreeStateChangeType : ::System::Byte
	{
		None = 0,
		Changed = 1,
		Sustained = 2,
	};
}
