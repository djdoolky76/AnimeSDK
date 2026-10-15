#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class EWaitFaceToTaskFinishMode : ::System::Int32
	{
		Default = 0,
		WaitAnimFinish = 1,
		WaitFaceAngle = 2,
	};
}
