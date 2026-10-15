#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class MapEffect : ::System::Int32
	{
		Unknown = 0,
		Path = 1,
		Region = 2,
		Cross = 3,
	};
}
