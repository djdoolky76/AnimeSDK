#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleEffect.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleEffect_RemoveAbility; }

#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_REMOVEABILITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D556BC0)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_REMOVEABILITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D556BD0)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_REMOVEABILITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D556B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleEffect_RemoveAbility_TypeDefinitionIndex = 15786;

	class ChenLingBattleEffect_RemoveAbility : public ::RPG::GameCore::BaseChenLingBattleEffect
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_REMOVEABILITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleEffect_RemoveAbility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleEffect_RemoveAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_REMOVEABILITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleEffect_RemoveAbility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleEffect_RemoveAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_REMOVEABILITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
