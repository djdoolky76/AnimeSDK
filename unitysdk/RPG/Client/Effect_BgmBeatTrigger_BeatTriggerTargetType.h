#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_BgmBeatTrigger_BeatTriggerTargetType_TypeDefinitionIndex = 72402;

	enum class Effect_BgmBeatTrigger_BeatTriggerTargetType : ::System::Int32
	{
		ParticleSystem = 0,
		Animator = 1,
	};
}
