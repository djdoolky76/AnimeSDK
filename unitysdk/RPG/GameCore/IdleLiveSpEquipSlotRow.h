#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveSpEquipSlotRow; }
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVESPEQUIPSLOTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E992DF0)
#define RPG_GAMECORE_IDLELIVESPEQUIPSLOTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E992B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveSpEquipSlotRow_TypeDefinitionIndex = 11823;

	class IdleLiveSpEquipSlotRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::System::UInt32 UnlockID; // 0x18
		::System::UInt32 ID; // 0x1C
		::System::UInt32 TeamSlot; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID UnlockHint; // 0x28
		::RPG::Client::TextID Title; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESPEQUIPSLOTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveSpEquipSlotRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveSpEquipSlotRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESPEQUIPSLOTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
