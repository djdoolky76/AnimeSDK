#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalGameNPCFadeAction_FadeType_TypeDefinitionIndex = 44943;

	enum class GalGameNPCFadeAction_FadeType : ::System::Byte
	{
		FadeOut = 1,
		FadeIn = 0,
	};
}
