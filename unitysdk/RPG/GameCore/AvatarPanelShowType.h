#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AvatarPanelShowType : ::System::Int32
	{
		All = 0,
		CasterOnly = 1,
		HideCustom = 2,
		ShowCustom = 3,
	};
}
