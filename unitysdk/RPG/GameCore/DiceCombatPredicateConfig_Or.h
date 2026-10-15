#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatPredicateConfig; }
namespace RPG::GameCore { class DiceCombatPredicateConfig_Or; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_OR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E1230)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_OR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E1240)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_OR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E20C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_Or_TypeDefinitionIndex = 16085;

	class DiceCombatPredicateConfig_Or : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatPredicateConfig* Left; // 0x20
		::RPG::GameCore::DiceCombatPredicateConfig* Right; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_OR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_Or* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_Or*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_OR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_Or* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_Or*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_OR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
