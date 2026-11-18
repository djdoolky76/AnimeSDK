#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MiniGame::TartarusHounds
{
	inline static constexpr unsigned int Direction_TypeDefinitionIndex = 82555;

	enum class Direction : ::System::Int32
	{
		None = 4,
		Left = 3,
		Down = 2,
		Up = 0,
		Right = 1,
	};
}
