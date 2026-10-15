#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class BezierPoint_HandleStyle : ::System::Int32
	{
		Connected = 0,
		Broken = 1,
		None = 2,
	};
}
