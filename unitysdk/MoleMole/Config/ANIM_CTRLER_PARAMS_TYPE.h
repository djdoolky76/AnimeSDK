#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ANIM_CTRLER_PARAMS_TYPE_TypeDefinitionIndex = 66779;

	enum class ANIM_CTRLER_PARAMS_TYPE : ::System::Int32
	{
		FLOAT = 4,
		TRIGGER = 1,
		BOOL = 2,
		UNKNOWN = 0,
		INT = 3,
	};
}
