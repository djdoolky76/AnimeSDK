#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleEffect.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleEffect_AddBounsAttackResource; }

#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDBOUNSATTACKRESOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D583850)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDBOUNSATTACKRESOURCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D583860)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDBOUNSATTACKRESOURCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5837C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleEffect_AddBounsAttackResource_TypeDefinitionIndex = 15785;

	class ChenLingBattleEffect_AddBounsAttackResource : public ::RPG::GameCore::BaseChenLingBattleEffect
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDBOUNSATTACKRESOURCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleEffect_AddBounsAttackResource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleEffect_AddBounsAttackResource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDBOUNSATTACKRESOURCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleEffect_AddBounsAttackResource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleEffect_AddBounsAttackResource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDBOUNSATTACKRESOURCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
