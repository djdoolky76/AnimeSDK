#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class CameraDataAndFlags_MazeBattleShotDataType : ::System::Int32
	{
		MonsterNPCUltraLongShot = 0,
		MonsterNPCLongShot = 1,
		MonsterNPCCloseShot = 2,
		LocalPlayerShot = 3,
		LocalPlayerMiddleShot = 4,
		LocalPlayerLongShot = 5,
		Custom = 6,
	};
}
