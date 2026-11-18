#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int PlayerAccessoryType_TypeDefinitionIndex = 63371;

	enum class PlayerAccessoryType : ::System::Int32
	{
		Chest = 3,
		All = 1,
		Back = 4,
		Head = 2,
	};
}
