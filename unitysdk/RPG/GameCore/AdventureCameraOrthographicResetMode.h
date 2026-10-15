#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AdventureCameraOrthographicResetMode : ::System::Int32
	{
		Default = 0,
		FreelookCam = 1,
		CurrentActiveVCam = 2,
		CustomFov = 3,
	};
}
