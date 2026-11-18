#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int AlertLevel_TypeDefinitionIndex = 2423;

	enum class AlertLevel : ::System::Byte
	{
		Warning = 1,
		Fatal = 2,
	};
}
