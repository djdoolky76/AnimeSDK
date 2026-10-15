#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class BindSwitchPhotoGraphFuncBtnUseType : ::System::Int32
	{
		ShowFuncBtnWithTrigger = 0,
		ShowFuncBtn = 1,
		StartPhotoGraph = 2,
		StartPhotoInTriggerRange = 3,
	};
}
