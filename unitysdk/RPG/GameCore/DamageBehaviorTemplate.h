#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DamageBlockType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DamageBehaviorTemplate; }
namespace System { class String; }

#define RPG_GAMECORE_DAMAGEBEHAVIORTEMPLATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5EFB10)
#define RPG_GAMECORE_DAMAGEBEHAVIORTEMPLATE_EEMBIGGKJKN_OFFSET UNITYSDK_OFFSET(0x1D5EFB90)
#define RPG_GAMECORE_DAMAGEBEHAVIORTEMPLATE_GET_MUTEBUTTRIGGERBLOCKRESULT_OFFSET UNITYSDK_OFFSET(0x1D5EFB20)
#define RPG_GAMECORE_DAMAGEBEHAVIORTEMPLATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5EF7F0)

namespace RPG::GameCore
{
	class DamageBehaviorTemplate : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* TemplateName; // 0x10
		::System::Boolean MuteDamageBlockExcludeDot; // 0x18
		::System::Boolean TriggerBlockDamageExcludeDot; // 0x19
		::System::Boolean MuteShield; // 0x1A
		::System::Boolean MuteSplitHp; // 0x1B
		::System::Boolean OnlyIsIndirectAttack; // 0x1C
		::System::Boolean OnlyIsNotHit; // 0x1D
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEBEHAVIORTEMPLATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DamageBehaviorTemplate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DamageBehaviorTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEBEHAVIORTEMPLATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		::System::Boolean get_MuteButTriggerBlockResult()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEBEHAVIORTEMPLATE_GET_MUTEBUTTRIGGERBLOCKRESULT_OFFSET))(this);
		}

		::System::Boolean EEMBIGGKJKN(::RPG::GameCore::DamageBlockType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DamageBlockType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEBEHAVIORTEMPLATE_EEMBIGGKJKN_OFFSET))(this, a1);
		}

	};
}
