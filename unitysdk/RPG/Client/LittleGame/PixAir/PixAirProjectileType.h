#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::PixAir
{
	enum class PixAirProjectileType : ::System::Int32
	{
		Invalid = 0,
		Missle = 1,
		Bullet = 2,
		Laser = 3,
	};
}
