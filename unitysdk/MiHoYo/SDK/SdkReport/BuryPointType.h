#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::SdkReport
{
	enum class BuryPointType : ::System::Int32
	{
		OnUpdate = 0,
		OnGUI = 1,
		OnBrowserReport = 2,
	};
}
