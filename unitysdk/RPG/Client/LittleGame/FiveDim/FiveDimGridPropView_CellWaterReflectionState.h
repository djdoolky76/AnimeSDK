#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	enum class FiveDimGridPropView_CellWaterReflectionState : ::System::Int32
	{
		None = 0,
		AboveWater = 1,
		ContactWater = 2,
		UnderWater = 3,
	};
}
