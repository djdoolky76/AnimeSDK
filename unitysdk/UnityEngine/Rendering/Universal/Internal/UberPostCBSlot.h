#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int UberPostCBSlot_TypeDefinitionIndex = 26651;

	enum class UberPostCBSlot : ::System::Int32
	{
		Base = 3,
		ColorCorrection = 0,
		ScreenEffectBase = 1,
		ScreenEffectRandom = 2,
	};
}
