#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleEffect.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleEffect_ChangeAttackSpeed; }

#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_CHANGEATTACKSPEED_CTOR_OFFSET UNITYSDK_OFFSET(0x1D584250)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_CHANGEATTACKSPEED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D584260)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_CHANGEATTACKSPEED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D584190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleEffect_ChangeAttackSpeed_TypeDefinitionIndex = 15792;

	class ChenLingBattleEffect_ChangeAttackSpeed : public ::RPG::GameCore::BaseChenLingBattleEffect
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* Num; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_CHANGEATTACKSPEED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleEffect_ChangeAttackSpeed* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleEffect_ChangeAttackSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_CHANGEATTACKSPEED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleEffect_ChangeAttackSpeed* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleEffect_ChangeAttackSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_CHANGEATTACKSPEED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
