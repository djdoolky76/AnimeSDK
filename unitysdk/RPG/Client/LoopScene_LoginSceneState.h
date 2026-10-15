#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class LoopScene_LoginSceneState : ::System::Int32
	{
		None = 0,
		TryToStop = 1,
		Move = 2,
	};
}
