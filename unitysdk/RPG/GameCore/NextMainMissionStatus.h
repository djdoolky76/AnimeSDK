#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class NextMainMissionStatus : ::System::Int32
	{
		None = 0,
		NotStart = 1,
		IsStart = 2,
	};
}
