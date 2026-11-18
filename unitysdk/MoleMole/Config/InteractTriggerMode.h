#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int InteractTriggerMode_TypeDefinitionIndex = 82175;

	enum class InteractTriggerMode : ::System::Int32
	{
		Auto = 1,
		Normal = 0,
	};
}
