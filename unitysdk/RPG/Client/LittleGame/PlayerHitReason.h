#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	enum class PlayerHitReason : ::System::Int32
	{
		Enemy = 0,
		EnemyBothSide = 1,
		Block = 2,
		BlockBothSide = 3,
		Bullet = 4,
	};
}
