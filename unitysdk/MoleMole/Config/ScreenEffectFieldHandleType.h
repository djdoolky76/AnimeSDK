#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScreenEffectFieldHandleType_TypeDefinitionIndex = 53448;

	enum class ScreenEffectFieldHandleType : ::System::Int32
	{
		UseNewValue = 2,
		UseProfileDefaultValue = 0,
		UseRuntimeProfileValue = 1,
	};
}
