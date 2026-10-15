#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class CameraDataAndFlags_ControlCameraProtectReason : ::System::Int32
	{
		DisableCameraProtectImpl = 0,
		ThirdPersonRoaming = 1,
	};
}
