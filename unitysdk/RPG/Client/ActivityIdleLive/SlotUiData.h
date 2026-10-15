#pragma once
#include "unitysdk/unitysdk.h"
class INPDCDFPKON;
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_SLOTUIDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE0DD0)

namespace RPG::Client::ActivityIdleLive
{
	struct alignas(8) SlotUiData
	{
		::System::String* ImagePath; // 0x10
		::System::Boolean IsEquipped; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 EquippedLevel; // 0x1C
		::System::String* EquippedRarityIcon; // 0x20
		::System::UInt32 EquippedRarity; // 0x28
		::System::UInt32 SlotIndex; // 0x2C
		::System::Void _ctor(::INPDCDFPKON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INPDCDFPKON*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SLOTUIDATA_CTOR_OFFSET))(this, a1);
		}

	};
}
