#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class MapCameraType : ::System::Int32
	{
		Base = 0,
		Maze = 1,
		Room = 2,
		LargeSpace = 3,
	};
}
