#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::PluginUI
{
	enum class HoYoSDKConfirmWithJoypad_ConfirmWithJoypadAdapterMsgID : ::System::Int32
	{
		UNKNOWN = -1,
		SET_JOYPAD_ENABLE = 0,
		SET_JOYPAD_TYPE = 1,
		SET_JOYPAD_EXCHANGE = 2,
	};
}
