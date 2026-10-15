#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	enum class MHYSDKC_Console_ActivityPlatform : ::System::Int32
	{
		Unknown = 0,
		XboxOne = 1,
		WindowsOneCore = 2,
		Win32 = 3,
		Scarlett = 4,
		iOS = 20,
		Android = 30,
		Nintendo = 40,
		PlayStation = 50,
		All = 60,
	};
}
