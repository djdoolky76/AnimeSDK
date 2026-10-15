#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	enum class InputSignalType : ::System::Int32
	{
		RotateWorldClockwise = 0,
		RotateWorldCounterClockwise = 1,
	};
}
