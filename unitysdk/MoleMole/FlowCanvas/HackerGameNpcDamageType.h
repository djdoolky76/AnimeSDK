#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameNpcDamageType_TypeDefinitionIndex = 74343;

	enum class HackerGameNpcDamageType : ::System::Int32
	{
		Damage = 1,
		DamageWhenEscape = 2,
		None = 0,
	};
}
