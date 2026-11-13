#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectAudioMuteReason_TypeDefinitionIndex = 71998;

	enum class MonoEffectAudioMuteReason : ::System::Int32
	{
		Invisible = 0,
		Timeline = 1,
	};
}
