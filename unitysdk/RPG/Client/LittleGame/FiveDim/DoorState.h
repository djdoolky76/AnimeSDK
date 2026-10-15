#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	enum class DoorState : ::System::Int32
	{
		Close = 0,
		Opening = 1,
		Open = 2,
	};
}
