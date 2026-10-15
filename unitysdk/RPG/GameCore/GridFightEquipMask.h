#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class GridFightEquipMask : ::System::UInt16
	{
		None = 0,
		Bit_Normal = 1,
		Bit_Hack = 2,
		Bit_CopyEquip = 4,
		Mask_Default = 5,
	};
}
