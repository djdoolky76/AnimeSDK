#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int EViewObjectComponentCustomEvent_TypeDefinitionIndex = 83220;

	enum class EViewObjectComponentCustomEvent : ::System::Int32
	{
		OnVoTriggerEnter = 5,
		OnUpdateSuite = 2,
		OnControllablePossessed = 3,
		OnGameplayTagChange = 8,
		None = 0,
		OnControllableUnpossessed = 4,
		OnVoTriggerExit = 6,
		OnVoTriggerStopListening = 7,
		OnGroupMemberActiveStateChanged = 1,
	};
}
