#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtSkillExtraConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtBattleSkillConfig; }

#define RPG_GAMECORE_RTBATTLESKILLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA4E5D0)
#define RPG_GAMECORE_RTBATTLESKILLCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA4E5E0)
#define RPG_GAMECORE_RTBATTLESKILLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA4E580)

namespace RPG::GameCore
{
	class RtBattleSkillConfig : public ::RPG::GameCore::RtSkillExtraConfigBase
	{
	public:
		::RPG::GameCore::FixPoint MoveStartTime; // 0x10
		::RPG::GameCore::FixPoint MoveFinishTime; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLESKILLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtBattleSkillConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtBattleSkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLESKILLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtBattleSkillConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtBattleSkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLESKILLCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
