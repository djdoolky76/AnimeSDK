#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ComicDessert
{
	inline static constexpr unsigned int ComicDessertGamepadRevealMode_TypeDefinitionIndex = 77148;

	enum class ComicDessertGamepadRevealMode : ::System::Int32
	{
		Immediate = 0,
		ErasePath = 1,
	};
}
