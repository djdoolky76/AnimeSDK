#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::XR
{
	inline static constexpr unsigned int ConnectionChangeType_TypeDefinitionIndex = 27659;

	enum class ConnectionChangeType : ::System::UInt32
	{
		Connected = 0,
		Disconnected = 1,
		ConfigChange = 2,
	};
}
