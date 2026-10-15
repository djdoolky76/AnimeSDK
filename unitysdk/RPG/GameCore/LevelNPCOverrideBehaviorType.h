#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class LevelNPCOverrideBehaviorType : ::System::Int32
	{
		None = 0,
		TrainPassenger = 1,
		TrainVisitor = 2,
		DreamlandActor = 3,
		RuanMadeCake = 4,
	};
}
