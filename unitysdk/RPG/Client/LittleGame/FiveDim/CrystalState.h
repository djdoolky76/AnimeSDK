#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	enum class CrystalState : ::System::Int32
	{
		None = -1,
		Normal = 0,
		Broken = 1,
		Die = 2,
	};
}
