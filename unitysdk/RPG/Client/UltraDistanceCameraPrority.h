#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class UltraDistanceCameraPrority : ::System::Int32
	{
		None = 0,
		UseSkillPerform = 1,
		CameraModuleResult = 2,
	};
}
