#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleEffect.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleEffect_ChangeMoveSpeed; }

#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_CHANGEMOVESPEED_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5843A0)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_CHANGEMOVESPEED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5843B0)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_CHANGEMOVESPEED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5842E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleEffect_ChangeMoveSpeed_TypeDefinitionIndex = 15793;

	class ChenLingBattleEffect_ChangeMoveSpeed : public ::RPG::GameCore::BaseChenLingBattleEffect
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* Num; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_CHANGEMOVESPEED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleEffect_ChangeMoveSpeed* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleEffect_ChangeMoveSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_CHANGEMOVESPEED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleEffect_ChangeMoveSpeed* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleEffect_ChangeMoveSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_CHANGEMOVESPEED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
