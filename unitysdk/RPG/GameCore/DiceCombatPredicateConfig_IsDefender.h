#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatPredicateConfig_IsDefender; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISDEFENDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D60E730)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISDEFENDER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D60E740)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISDEFENDER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D60FA50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_IsDefender_TypeDefinitionIndex = 16107;

	class DiceCombatPredicateConfig_IsDefender : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISDEFENDER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_IsDefender* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_IsDefender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISDEFENDER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_IsDefender* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_IsDefender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISDEFENDER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
