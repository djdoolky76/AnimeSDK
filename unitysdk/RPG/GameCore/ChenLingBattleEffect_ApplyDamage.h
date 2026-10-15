#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleEffect.h"
#include "unitysdk/RPG/GameCore/ChenLingDamageType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleEffect_ApplyDamage; }

#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_APPLYDAMAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D556620)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_APPLYDAMAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D556630)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_APPLYDAMAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5565D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleEffect_ApplyDamage_TypeDefinitionIndex = 15784;

	class ChenLingBattleEffect_ApplyDamage : public ::RPG::GameCore::BaseChenLingBattleEffect
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* Damage; // 0x10
		::RPG::GameCore::ChenLingDamageType DamageType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_APPLYDAMAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleEffect_ApplyDamage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleEffect_ApplyDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_APPLYDAMAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleEffect_ApplyDamage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleEffect_ApplyDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_APPLYDAMAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
