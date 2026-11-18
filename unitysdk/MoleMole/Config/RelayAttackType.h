#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int RelayAttackType_TypeDefinitionIndex = 74721;

	enum class RelayAttackType : ::System::Int32
	{
		QTE = 2,
		None = 0,
		Normal = 1,
		ExQTE = 3,
	};
}
