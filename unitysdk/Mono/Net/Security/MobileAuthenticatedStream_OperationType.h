#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Net::Security
{
	enum class MobileAuthenticatedStream_OperationType : ::System::Int32
	{
		Read = 0,
		Write = 1,
		Shutdown = 2,
	};
}
