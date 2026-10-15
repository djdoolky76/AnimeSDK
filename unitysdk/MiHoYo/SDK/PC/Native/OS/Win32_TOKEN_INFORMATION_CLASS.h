#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::PC::Native::OS
{
	enum class Win32_TOKEN_INFORMATION_CLASS : ::System::Int32
	{
		TokenUser = 1,
	};
}
