#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int StateIdleTimer_IdleShowForbidReason_TypeDefinitionIndex = 70780;

	enum class StateIdleTimer_IdleShowForbidReason : ::System::Int32
	{
		Default = 0,
		LookAt = 1,
		UI3D = 2,
	};
}
