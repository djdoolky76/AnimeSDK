#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	enum class MiHoYoSDKServer_ServerError : ::System::Int32
	{
		ConnectFailed = -2001,
		LogError = -2002,
		NetworkError = -2003,
		NetworkTimeOut = -2004,
	};
}
