#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleAbility_SelfBoom; }
namespace RPG::GameCore { class ChenLingBattleEffectConfig; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITY_SELFBOOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D553660)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_SELFBOOM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D553670)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_SELFBOOM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D553610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbility_SelfBoom_TypeDefinitionIndex = 15751;

	class ChenLingBattleAbility_SelfBoom : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* Damage; // 0x10
		::RPG::GameCore::BaseChenLingBattleValueGetter* Radius; // 0x18
		::System::Boolean HasSecondBoom; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::GameCore::BaseChenLingBattleValueGetter* DelaySecondBoom; // 0x28
		::RPG::GameCore::ChenLingBattleEffectConfig* BoomEffectConfig; // 0x30
		::RPG::GameCore::ChenLingBattleEffectConfig* HitEffectConfig; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_SELFBOOM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbility_SelfBoom* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbility_SelfBoom*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_SELFBOOM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbility_SelfBoom* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbility_SelfBoom*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_SELFBOOM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
