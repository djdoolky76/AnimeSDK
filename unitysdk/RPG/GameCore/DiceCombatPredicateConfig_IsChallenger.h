#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatPredicateConfig_IsChallenger; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISCHALLENGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D60E580)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISCHALLENGER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D60E590)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISCHALLENGER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D60FA00)

namespace RPG::GameCore
{
	class DiceCombatPredicateConfig_IsChallenger : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISCHALLENGER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_IsChallenger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_IsChallenger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISCHALLENGER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_IsChallenger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_IsChallenger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISCHALLENGER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
