#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatPredicateConfig_ChallengerHasSameConfirmPoint; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CHALLENGERHASSAMECONFIRMPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3BB9B0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CHALLENGERHASSAMECONFIRMPOINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F3BB9C0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CHALLENGERHASSAMECONFIRMPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F3BF390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_ChallengerHasSameConfirmPoint_TypeDefinitionIndex = 16268;

	class DiceCombatPredicateConfig_ChallengerHasSameConfirmPoint : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CHALLENGERHASSAMECONFIRMPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_ChallengerHasSameConfirmPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_ChallengerHasSameConfirmPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CHALLENGERHASSAMECONFIRMPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_ChallengerHasSameConfirmPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_ChallengerHasSameConfirmPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CHALLENGERHASSAMECONFIRMPOINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
