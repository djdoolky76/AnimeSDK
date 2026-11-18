#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterSize_TypeDefinitionIndex = 45784;

	enum class CharacterSize : ::System::Int32
	{
		Middle = 2,
		Small = 1,
		Gigantic = 4,
		Large = 3,
		Tiny = 0,
	};
}
