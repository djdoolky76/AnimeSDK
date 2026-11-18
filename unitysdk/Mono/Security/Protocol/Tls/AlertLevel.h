#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int AlertLevel_TypeDefinitionIndex = 2342;

	enum class AlertLevel : ::System::Byte
	{
		Warning = 1,
		Fatal = 2,
	};
}
