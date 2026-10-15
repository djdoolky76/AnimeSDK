#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitHeliobusChallengeExitNotify; }

#define RPG_GAMECORE_WAITHELIOBUSCHALLENGEEXITNOTIFY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC9A670)
#define RPG_GAMECORE_WAITHELIOBUSCHALLENGEEXITNOTIFY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC9A680)
#define RPG_GAMECORE_WAITHELIOBUSCHALLENGEEXITNOTIFY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC9A640)

namespace RPG::GameCore
{
	class WaitHeliobusChallengeExitNotify : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* ChallengeGroupID; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNotify; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITHELIOBUSCHALLENGEEXITNOTIFY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitHeliobusChallengeExitNotify* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitHeliobusChallengeExitNotify*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITHELIOBUSCHALLENGEEXITNOTIFY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitHeliobusChallengeExitNotify* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitHeliobusChallengeExitNotify*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITHELIOBUSCHALLENGEEXITNOTIFY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
