#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueNousDiceSlotRow; }

#define RPG_GAMECORE_ROGUENOUSDICESLOTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA202F0)
#define RPG_GAMECORE_ROGUENOUSDICESLOTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA20040)

namespace RPG::GameCore
{
	class RogueNousDiceSlotRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID UpgradedSlotName; // 0x10
		::System::UInt32 MaxRarity; // 0x20
		::System::UInt32 SlotUnlockID; // 0x24
		::System::UInt32 SlotID; // 0x28
		::System::UInt32 ExtraMaxRarity; // 0x2C
		::RPG::Client::TextID SlotName; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICESLOTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueNousDiceSlotRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueNousDiceSlotRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICESLOTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
