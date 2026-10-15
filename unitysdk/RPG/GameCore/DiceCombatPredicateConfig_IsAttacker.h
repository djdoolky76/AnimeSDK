#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatPredicateConfig_IsAttacker; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISATTACKER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D60E220)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISATTACKER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D60E230)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISATTACKER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D60F960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_IsAttacker_TypeDefinitionIndex = 16106;

	class DiceCombatPredicateConfig_IsAttacker : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISATTACKER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_IsAttacker* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_IsAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISATTACKER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_IsAttacker* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_IsAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISATTACKER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
