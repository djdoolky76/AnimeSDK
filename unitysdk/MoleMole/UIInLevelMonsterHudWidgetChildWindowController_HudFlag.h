#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelMonsterHudWidgetChildWindowController_HudFlag_TypeDefinitionIndex = 89655;

	enum class UIInLevelMonsterHudWidgetChildWindowController_HudFlag : ::System::Int32
	{
		Show = 1,
		Stun = 128,
		StunMax = 4,
		Lock = 2,
		StunFillGrey = 256,
		Destroy = 32,
		StunDestroyDelay = 512,
		HeavyAttack = 8,
		Hide = 16,
		PrepareDestroy = 64,
	};
}
