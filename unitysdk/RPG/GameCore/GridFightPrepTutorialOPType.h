#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class GridFightPrepTutorialOPType : ::System::Int32
	{
		Unknow = 0,
		CloseShop = 1,
		ShowToastHint = 2,
		ShowTopHint = 3,
		CloseToastReturnPrep = 4,
		SetNodeVisible = 5,
		SetPopupPanelVisible = 6,
		SetGoldNum = 7,
		RemoveEquipTrack = 8,
		ShowSubToastHint = 9,
	};
}
