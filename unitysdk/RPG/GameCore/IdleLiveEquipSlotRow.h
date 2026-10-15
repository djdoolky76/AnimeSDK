#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/IdleLiveEquipType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveEquipSlotRow; }
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEEQUIPSLOTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D77B040)
#define RPG_GAMECORE_IDLELIVEEQUIPSLOTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D77AE20)

namespace RPG::GameCore
{
	class IdleLiveEquipSlotRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::System::UInt32 ID; // 0x18
		::RPG::GameCore::IdleLiveEquipType Type; // 0x1C
		::System::UInt32 UnlockID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Title; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEQUIPSLOTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveEquipSlotRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveEquipSlotRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEQUIPSLOTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
