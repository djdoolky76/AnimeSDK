#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialGuestType_TypeDefinitionIndex = 11216;

	enum class SpecialGuestType : ::System::Int32
	{
		Evanescia = 0,
		Ashveil = 1,
		Pearl = 2,
		Kuchiba = 3,
		Blade = 4,
	};
}
