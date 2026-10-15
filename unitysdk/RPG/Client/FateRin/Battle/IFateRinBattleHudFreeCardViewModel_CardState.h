#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::FateRin::Battle
{
	enum class IFateRinBattleHudFreeCardViewModel_CardState : ::System::Int32
	{
		Hide = 0,
		Center = 1,
		Targeting = 2,
		ReleasePreview = 3,
		Dragging = 4,
	};
}
