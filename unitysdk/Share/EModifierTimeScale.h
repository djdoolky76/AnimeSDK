#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EModifierTimeScale_TypeDefinitionIndex = 10198;

	enum class EModifierTimeScale : ::System::Int16
	{
		Owner = 0,
		Level = 2,
		Caster = 1,
	};
}
