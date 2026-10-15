#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare
{
	enum class SpawnEntityMode : ::System::Byte
	{
		Unknown = 0,
		Interpolated = 1,
		Predicted = 2,
	};
}
