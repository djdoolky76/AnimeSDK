#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class OperationTypeMask : ::System::UInt16
	{
		None = 0,
		Mask_Full = 65535,
		Mask_NormalOp = 1,
		Mask_SetAutoBattle = 2,
		Mask_QuitBattle = 4,
		Mask_InsertUltraSkill = 8,
		Mask_SetComplexSkillAIConsiderUltra = 16,
		Mask_GM = 32,
		Mask_EvolveBuild = 64,
		Mask_Fate = 128,
		Mask_LevelGraph = 256,
		Mask_CustomUIOperate = 512,
		Mask_UIOperate = 798,
		Mask_AutoCallNoGM = 65311,
		Mask_AutoCall = 65343,
		Mask_ExternalCall = 192,
	};
}
