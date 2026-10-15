#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class GridFightTraitSourceMask : ::System::Int32
	{
		None = 1,
		Role = 2,
		Equip = 4,
		Dummy = 8,
		AllType = 14,
	};
}
