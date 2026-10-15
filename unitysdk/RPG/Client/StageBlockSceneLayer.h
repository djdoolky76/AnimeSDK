#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class StageBlockSceneLayer : ::System::Int32
	{
		Unknown = 0,
		CloseView = 1,
		MiddleDistantView = 2,
		DistantView = 3,
		Light = 4,
		BattleArea = 5,
	};
}
