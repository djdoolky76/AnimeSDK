#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class MainCameraDisableReason : ::System::Int32
	{
		ScreenTransfer = 0,
		Video = 1,
		ScreenshotMCP = 2,
	};
}
