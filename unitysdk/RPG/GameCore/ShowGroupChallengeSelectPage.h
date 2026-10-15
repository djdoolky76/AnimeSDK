#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowGroupChallengeSelectPage; }

#define RPG_GAMECORE_SHOWGROUPCHALLENGESELECTPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DADD9A0)
#define RPG_GAMECORE_SHOWGROUPCHALLENGESELECTPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DADD9B0)
#define RPG_GAMECORE_SHOWGROUPCHALLENGESELECTPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DADD960)

namespace RPG::GameCore
{
	class ShowGroupChallengeSelectPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::Boolean IsScheduleChallenge; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGROUPCHALLENGESELECTPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowGroupChallengeSelectPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowGroupChallengeSelectPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGROUPCHALLENGESELECTPAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowGroupChallengeSelectPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowGroupChallengeSelectPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGROUPCHALLENGESELECTPAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
