#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleEffect.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleEffect_AddCertainCriticalHits; }

#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDCERTAINCRITICALHITS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D583B10)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDCERTAINCRITICALHITS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D583A90)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDCERTAINCRITICALHITS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D583A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleEffect_AddCertainCriticalHits_TypeDefinitionIndex = 15790;

	class ChenLingBattleEffect_AddCertainCriticalHits : public ::RPG::GameCore::BaseChenLingBattleEffect
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* Num; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDCERTAINCRITICALHITS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleEffect_AddCertainCriticalHits* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleEffect_AddCertainCriticalHits*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDCERTAINCRITICALHITS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleEffect_AddCertainCriticalHits* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleEffect_AddCertainCriticalHits*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDCERTAINCRITICALHITS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
