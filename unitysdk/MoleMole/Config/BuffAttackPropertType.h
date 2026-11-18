#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int BuffAttackPropertType_TypeDefinitionIndex = 48543;

	enum class BuffAttackPropertType : ::System::Int32
	{
		HitType = 2,
		SpecialType = 1,
		DamageType = 0,
	};
}
