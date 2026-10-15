#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleEffect.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleBuffType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleBuffTypeExtraConfig; }
namespace RPG::GameCore { class ChenLingBattleEffect_AddBuff; }

#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDBUFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D583910)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDBUFF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D583920)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDBUFF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5838C0)

namespace RPG::GameCore
{
	class ChenLingBattleEffect_AddBuff : public ::RPG::GameCore::BaseChenLingBattleEffect
	{
	public:
		::RPG::GameCore::ChenLingBattleBuffType BuffType; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::ChenLingBattleBuffTypeExtraConfig* ExtraConfig; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDBUFF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleEffect_AddBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleEffect_AddBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDBUFF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleEffect_AddBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleEffect_AddBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDBUFF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
