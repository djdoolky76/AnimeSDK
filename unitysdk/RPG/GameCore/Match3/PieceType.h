#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore::Match3
{
	enum class PieceType : ::System::Int32
	{
		None = 0,
		Normal = 1,
		Bomb = 2,
		Special = 3,
	};
}
