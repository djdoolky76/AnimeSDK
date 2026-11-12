#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int LittleGameSandboxLegacyHandled_TypeDefinitionIndex = 61919;

	enum class LittleGameSandboxLegacyHandled : ::System::Int32
	{
		None = 0,
		WaitStreaming = 1,
		GameplayLock = 2,
		OptionalBlock = 4,
		ContainerLod = 8,
	};
}
