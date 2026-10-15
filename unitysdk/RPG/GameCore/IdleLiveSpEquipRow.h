#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class AKACCHPPLPG;
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveSpEquipRow; }
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVESPEQUIPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D77F190)
#define RPG_GAMECORE_IDLELIVESPEQUIPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D77EF60)

namespace RPG::GameCore
{
	class IdleLiveSpEquipRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::AKACCHPPLPG* DefenceParam; // 0x18
		::AKACCHPPLPG* HpParam; // 0x20
		::AKACCHPPLPG* AttackParam; // 0x28
		::RPG::Client::TextID Name; // 0x30
		::System::UInt32 ID; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESPEQUIPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveSpEquipRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveSpEquipRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESPEQUIPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
