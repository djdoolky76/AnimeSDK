#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PuzzleDeactiveTag_TypeDefinitionIndex = 57388;

	enum class PuzzleDeactiveTag : ::System::Byte
	{
		None = 0,
		Performance = 1,
		PhotoGraphShow = 2,
		EraFlipper = 4,
		HideAllProp = 8,
	};
}
