#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleAbility_ShowTalk; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITY_SHOWTALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D581390)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_SHOWTALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5813A0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_SHOWTALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D581340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbility_ShowTalk_TypeDefinitionIndex = 15818;

	class ChenLingBattleAbility_ShowTalk : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::System::UInt32 Target; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID TalkText; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_SHOWTALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbility_ShowTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbility_ShowTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_SHOWTALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAbility_ShowTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAbility_ShowTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_SHOWTALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
