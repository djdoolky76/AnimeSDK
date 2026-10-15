#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	enum class ViewGravityInterpolationFlag : ::System::Byte
	{
		None = 0,
		GravityLine = 1,
		GravityFieldRing = 2,
	};
}
