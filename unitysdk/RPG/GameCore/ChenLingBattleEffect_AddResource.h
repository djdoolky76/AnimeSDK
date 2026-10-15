#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleEffect.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleResource; }
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleEffect_AddResource; }

#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDRESOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D583E10)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDRESOURCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D583E20)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDRESOURCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D583DC0)

namespace RPG::GameCore
{
	class ChenLingBattleEffect_AddResource : public ::RPG::GameCore::BaseChenLingBattleEffect
	{
	public:
		::RPG::GameCore::BaseChenLingBattleResource* Resource; // 0x10
		::RPG::GameCore::BaseChenLingBattleValueGetter* Num; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDRESOURCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleEffect_AddResource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleEffect_AddResource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDRESOURCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleEffect_AddResource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleEffect_AddResource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDRESOURCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
