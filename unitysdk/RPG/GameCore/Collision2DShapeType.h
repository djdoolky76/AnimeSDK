#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class Collision2DShapeType : ::System::Int32
	{
		Point = 0,
		Circle = 1,
		Rect = 2,
		Arc = 3,
		_Count = 4,
	};
}
