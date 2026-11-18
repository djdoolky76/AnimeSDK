#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int SecondaryCharacterType_TypeDefinitionIndex = 65002;

	enum class SecondaryCharacterType : ::System::Int32
	{
		Unknown = 0,
		MainPlayer = 3,
		Avatar = 1,
		Monster = 2,
	};
}
