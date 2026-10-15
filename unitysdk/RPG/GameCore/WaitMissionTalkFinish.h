#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitMissionTalkFinish; }

#define RPG_GAMECORE_WAITMISSIONTALKFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6E770)
#define RPG_GAMECORE_WAITMISSIONTALKFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC6E780)
#define RPG_GAMECORE_WAITMISSIONTALKFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC6E740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitMissionTalkFinish_TypeDefinitionIndex = 23810;

	class WaitMissionTalkFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean WaitVoiceFinish; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMISSIONTALKFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitMissionTalkFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitMissionTalkFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMISSIONTALKFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitMissionTalkFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitMissionTalkFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMISSIONTALKFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
