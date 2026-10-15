#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AliveStateMask : ::System::UInt16
	{
		NoOne = 0,
		Anyone = 65535,
		Bit_Alive = 1,
		Bit_Limbo = 2,
		Bit_LimboRevivable = 4,
		Bit_Deathrattle = 8,
		Bit_Dying = 16,
		Bit_Died = 32,
		Bit_WillBeDestroy = 64,
		Bit_Destroyed = 128,
		Bit_OnStage = 256,
		Bit_UnStage = 512,
		Mask_AliveOnly = 1,
		Mask_LimboOnly = 14,
		Mask_DiedButNotDispose = 48,
		Mask_AliveOrLimbo = 15,
		Mask_AliveOrRevivable = 5,
		Mask_LimboOrDead = 62,
		Mask_NotDestroyed = 63,
		Mask_AliveStateCheck = 255,
		Mask_StageCheck = 768,
	};
}
