#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueCompare.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatPredicateConfig_DamageValueCompare; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DAMAGEVALUECOMPARE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D60C460)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DAMAGEVALUECOMPARE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D60C470)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DAMAGEVALUECOMPARE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D60F460)

namespace RPG::GameCore
{
	class DiceCombatPredicateConfig_DamageValueCompare : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatValueCompare Compare; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* Value; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DAMAGEVALUECOMPARE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DamageValueCompare* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_DamageValueCompare*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DAMAGEVALUECOMPARE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DamageValueCompare* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_DamageValueCompare*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DAMAGEVALUECOMPARE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
