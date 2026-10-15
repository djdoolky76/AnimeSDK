#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleEffect.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleEffect_AddDamageReduction; }

#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDDAMAGEREDUCTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D583D30)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDDAMAGEREDUCTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D583D40)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDDAMAGEREDUCTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D583C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleEffect_AddDamageReduction_TypeDefinitionIndex = 15789;

	class ChenLingBattleEffect_AddDamageReduction : public ::RPG::GameCore::BaseChenLingBattleEffect
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* Num; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDDAMAGEREDUCTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleEffect_AddDamageReduction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleEffect_AddDamageReduction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDDAMAGEREDUCTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleEffect_AddDamageReduction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleEffect_AddDamageReduction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDDAMAGEREDUCTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
