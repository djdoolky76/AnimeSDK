#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class PauseMainCameraUpdateReason : ::System::Int32
	{
		PauseCameraTask = 1,
		GM = 2,
		LockModule = 4,
		CameraManagerActive = 8,
		Effect = 16,
		SwitchAnchor = 32,
	};
}
