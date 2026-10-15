#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TeamLeaderRunning; }

#define RPG_GAMECORE_TEAMLEADERRUNNING_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB79FE0)
#define RPG_GAMECORE_TEAMLEADERRUNNING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB79FF0)
#define RPG_GAMECORE_TEAMLEADERRUNNING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB79FB0)

namespace RPG::GameCore
{
	class TeamLeaderRunning : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single RunningTime; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicString* StartStr; // 0x20
		::RPG::GameCore::DynamicString* ResetAndStopStr; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTimeSatisfied; // 0x30
		::System::Boolean IsLoop; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLEADERRUNNING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeamLeaderRunning* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeamLeaderRunning*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLEADERRUNNING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeamLeaderRunning* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeamLeaderRunning*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLEADERRUNNING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
