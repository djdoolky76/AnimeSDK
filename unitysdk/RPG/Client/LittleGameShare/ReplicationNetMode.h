#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ReplicationNetMode_TypeDefinitionIndex = 36883;

	enum class ReplicationNetMode : ::System::Byte
	{
		Standalone = 0,
		DedicatedServer = 1,
		ListenServer = 2,
		Client = 3,
		Max = 4,
	};
}
