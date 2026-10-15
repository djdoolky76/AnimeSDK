#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Net
{
	enum class CFProxyType : ::System::Int32
	{
		None = 0,
		AutoConfigurationUrl = 1,
		AutoConfigurationJavaScript = 2,
		FTP = 3,
		HTTP = 4,
		HTTPS = 5,
		SOCKS = 6,
	};
}
