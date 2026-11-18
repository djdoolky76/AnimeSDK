#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMisc_NapAnimatorUpdateMode_TypeDefinitionIndex = 92041;

	enum class ConfigMisc_NapAnimatorUpdateMode : ::System::Int32
	{
		Normal = 0,
		Physics = 2,
		Manual = 1,
	};
}
