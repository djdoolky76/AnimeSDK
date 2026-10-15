#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	enum class MiHoYoSDKWebViewManager_PreloadStatus : ::System::Int32
	{
		PreloadNone = 0,
		PreloadBaseStart = 1,
		PreloadBaseFinish = 2,
		PreloadFinish = 3,
	};
}
