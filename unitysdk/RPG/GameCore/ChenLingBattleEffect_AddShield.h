#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleEffect.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleEffect_AddShield; }

#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDSHIELD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D556540)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDSHIELD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D556550)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDSHIELD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D556480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleEffect_AddShield_TypeDefinitionIndex = 15788;

	class ChenLingBattleEffect_AddShield : public ::RPG::GameCore::BaseChenLingBattleEffect
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* Num; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDSHIELD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleEffect_AddShield* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleEffect_AddShield*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDSHIELD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleEffect_AddShield* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleEffect_AddShield*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDSHIELD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
