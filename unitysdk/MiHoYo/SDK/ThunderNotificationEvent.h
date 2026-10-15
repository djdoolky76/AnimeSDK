#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	enum class ThunderNotificationEvent : ::System::Int32
	{
		AllProgress = 0,
		StateChange = 1,
		DownloadOver = 2,
	};
}
