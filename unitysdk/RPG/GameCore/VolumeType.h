#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class VolumeType : ::System::Int32
	{
		Unknown = 0,
		Polygon = 1,
		OBB = 2,
	};
}
