#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DamageResistanceTypeRow; }
namespace System { class String; }

#define RPG_GAMECORE_DAMAGERESISTANCETYPEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5F20E0)
#define RPG_GAMECORE_DAMAGERESISTANCETYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5F19F0)

namespace RPG::GameCore
{
	class DamageResistanceTypeRow : public ::System::Object
	{
	public:
		::System::String* HighResistanceIcon; // 0x10
		::System::String* Icon; // 0x18
		::RPG::GameCore::AttackDamageType Type; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID HighResistance; // 0x28
		::RPG::Client::TextID Resistance; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGERESISTANCETYPEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DamageResistanceTypeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DamageResistanceTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGERESISTANCETYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
