#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueCompare.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatPredicateConfig_TotalDamageTakenCompare; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_TOTALDAMAGETAKENCOMPARE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D60EE60)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_TOTALDAMAGETAKENCOMPARE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D60EE70)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_TOTALDAMAGETAKENCOMPARE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D60FB90)

namespace RPG::GameCore
{
	class DiceCombatPredicateConfig_TotalDamageTakenCompare : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20
		::RPG::GameCore::DiceCombatValueCompare Compare; // 0x24
		::RPG::GameCore::DynamicFloat* Value; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_TOTALDAMAGETAKENCOMPARE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_TotalDamageTakenCompare* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_TotalDamageTakenCompare*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_TOTALDAMAGETAKENCOMPARE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_TotalDamageTakenCompare* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_TotalDamageTakenCompare*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_TOTALDAMAGETAKENCOMPARE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
