#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueCompare.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatPredicateConfig_DicePointCountCompare; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEPOINTCOUNTCOMPARE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D60CFF0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEPOINTCOUNTCOMPARE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D60D000)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEPOINTCOUNTCOMPARE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D60F640)

namespace RPG::GameCore
{
	class DiceCombatPredicateConfig_DicePointCountCompare : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* Point; // 0x28
		::RPG::GameCore::DiceCombatValueCompare Logic; // 0x30
		::System::Byte _padding1[0x4];
		::RPG::GameCore::DynamicFloat* Count; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEPOINTCOUNTCOMPARE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DicePointCountCompare* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_DicePointCountCompare*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEPOINTCOUNTCOMPARE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DicePointCountCompare* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_DicePointCountCompare*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEPOINTCOUNTCOMPARE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
