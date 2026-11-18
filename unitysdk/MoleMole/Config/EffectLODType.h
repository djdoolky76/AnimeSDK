#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int EffectLODType_TypeDefinitionIndex = 42580;

	enum class EffectLODType : ::System::Int32
	{
		Default = 0,
		High = 3,
		Low = 1,
		Medium = 2,
		LowBefore = 4,
	};
}
