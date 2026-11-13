#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameSandboxAudioListenerMode_TypeDefinitionIndex = 19091;

	enum class LittleGameSandboxAudioListenerMode : ::System::Int32
	{
		Unchanged = 0,
		FollowTarget = 1,
		CameraWithinDistance = 2,
	};
}
