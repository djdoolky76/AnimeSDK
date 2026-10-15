#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ChenLing
{
	enum class ChenLingBulletTrajectoryType : ::System::Int32
	{
		Parabolic = 0,
		InPlace = 1,
		Straight = 2,
		Bezier = 3,
	};
}
