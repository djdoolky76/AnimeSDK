#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class GridFightTraitSrcType : ::System::Int32
	{
		Role = 0,
		Equip = 1,
		GainFrontTrait = 2,
		Projection = 3,
	};
}
