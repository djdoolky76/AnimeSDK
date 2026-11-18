#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowInteractEffectImpBase_EffectImpState_TypeDefinitionIndex = 58413;

	enum class HollowInteractEffectImpBase_EffectImpState : ::System::Int32
	{
		Executing = 1,
		None = 0,
		Finish = 2,
	};
}
