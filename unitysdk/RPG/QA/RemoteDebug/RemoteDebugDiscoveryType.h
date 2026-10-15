#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::QA::RemoteDebug
{
	inline static constexpr unsigned int RemoteDebugDiscoveryType_TypeDefinitionIndex = 51832;

	enum class RemoteDebugDiscoveryType : ::System::Byte
	{
		Query = 0,
		Reply = 1,
	};
}
