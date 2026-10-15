#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security::Interface
{
	enum class AlertLevel : ::System::Byte
	{
		Warning = 1,
		Fatal = 2,
	};
}
