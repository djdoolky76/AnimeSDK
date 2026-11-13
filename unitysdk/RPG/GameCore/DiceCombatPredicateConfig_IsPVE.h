#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatPredicateConfig_IsPVE; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISPVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3BE9A0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISPVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F3BE9B0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISPVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F3BFB60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_IsPVE_TypeDefinitionIndex = 16276;

	class DiceCombatPredicateConfig_IsPVE : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISPVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_IsPVE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_IsPVE*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISPVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_IsPVE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_IsPVE*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISPVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
