#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::MechCraft::ViewModel
{
	enum class MechCraftDiyViewEventType : ::System::Int32
	{
		RequestConfirmExit = 0,
		RequestClose = 1,
		PlayLeftListFadeIn = 2,
		PlayRightListFadeIn = 3,
	};
}
