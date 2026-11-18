#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::DisplayCase
{
	inline static constexpr unsigned int EDisplayItemSubType_TypeDefinitionIndex = 49811;

	enum class EDisplayItemSubType : ::System::Int32
	{
		Limited = 3,
		Weapon = 2,
		Others = 99,
		Story = 1,
		Panel = 50,
		None = 0,
		Fashioned = 4,
	};
}
