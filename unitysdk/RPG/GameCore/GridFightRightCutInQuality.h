#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRightCutInQuality_TypeDefinitionIndex = 25197;

	enum class GridFightRightCutInQuality : ::System::Int32
	{
		None = 0,
		Copper = 1,
		Silver = 2,
		Gold = 3,
		Multicolor = 4,
		Unique = 5,
	};
}
