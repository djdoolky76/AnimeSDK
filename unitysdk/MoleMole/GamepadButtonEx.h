#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int GamepadButtonEx_TypeDefinitionIndex = 77559;

	enum class GamepadButtonEx : ::System::Int32
	{
		LStickRight = 3,
		RStickDown = 5,
		LStickLeft = 2,
		RStickUp = 4,
		RStickLeft = 6,
		RStickRight = 7,
		LStickDown = 1,
		LStickUp = 0,
	};
}
