#pragma once
#include "unitysdk/unitysdk.h"

namespace Spine::Unity
{
	enum class SettingsTriState : ::System::Int32
	{
		Disable = 0,
		Enable = 1,
		UseGlobalSetting = 2,
	};
}
