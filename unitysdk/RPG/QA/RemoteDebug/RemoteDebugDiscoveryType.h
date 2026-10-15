#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::QA::RemoteDebug
{
	enum class RemoteDebugDiscoveryType : ::System::Byte
	{
		Query = 0,
		Reply = 1,
	};
}
