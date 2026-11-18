#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int DamageHitType_TypeDefinitionIndex = 66069;

	enum class DamageHitType : ::System::Int32
	{
		Pierce = 103,
		Cut = 101,
		Punch = 102,
		None = 0,
	};
}
