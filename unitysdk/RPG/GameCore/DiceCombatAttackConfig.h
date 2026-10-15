#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatIgnoreDefendPointType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatAttackConfig; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATATTACKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6058F0)
#define RPG_GAMECORE_DICECOMBATATTACKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D605790)

namespace RPG::GameCore
{
	class DiceCombatAttackConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DiceCombatIgnoreDefendPointType IgnoreDefendPointType; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* IgnorePartialDefendPointValue; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATATTACKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatAttackConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatAttackConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATATTACKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
