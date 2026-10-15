#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	enum class SplineMoveState : ::System::Int32
	{
		Stop = 0,
		Move = 1,
		Wait = 2,
	};
}
