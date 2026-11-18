#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AttackType_TypeDefinitionIndex = 68854;

	enum class AttackType : ::System::Int32
	{
		Range = 2,
		Melee = 1,
		Unknown = 0,
		Mix = 3,
		Max = 4,
	};
}
