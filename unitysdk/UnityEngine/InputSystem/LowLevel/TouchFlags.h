#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int TouchFlags_TypeDefinitionIndex = 31962;

	enum class TouchFlags : ::System::Byte
	{
		IndirectTouch = 1,
		PrimaryTouch = 8,
		TapPress = 16,
		TapRelease = 32,
		OrphanedPrimaryTouch = 64,
		BeganInSameFrame = 128,
	};
}
