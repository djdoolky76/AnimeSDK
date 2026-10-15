#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleEffect.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleEffect_AddAttack; }

#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDATTACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D583700)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDATTACK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D583710)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDATTACK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5836B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleEffect_AddAttack_TypeDefinitionIndex = 15795;

	class ChenLingBattleEffect_AddAttack : public ::RPG::GameCore::BaseChenLingBattleEffect
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* Base; // 0x10
		::RPG::GameCore::BaseChenLingBattleValueGetter* Multipier; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDATTACK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleEffect_AddAttack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleEffect_AddAttack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDATTACK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleEffect_AddAttack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleEffect_AddAttack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDATTACK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
