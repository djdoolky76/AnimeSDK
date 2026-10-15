#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	enum class MonopolyMoveType : ::System::Int32
	{
		Unknown = 0,
		Walk = 1,
		Jump = 2,
		Teleport = 3,
	};
}
