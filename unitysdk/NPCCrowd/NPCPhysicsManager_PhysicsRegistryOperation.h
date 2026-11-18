#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCPhysicsManager_PhysicsRegistryOperation_TypeDefinitionIndex = 67734;

	enum class NPCPhysicsManager_PhysicsRegistryOperation : ::System::Byte
	{
		Unregister = 1,
		Register = 0,
	};
}
