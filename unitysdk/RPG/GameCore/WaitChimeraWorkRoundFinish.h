#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitChimeraWorkRoundFinish; }

#define RPG_GAMECORE_WAITCHIMERAWORKROUNDFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC95150)
#define RPG_GAMECORE_WAITCHIMERAWORKROUNDFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC95160)
#define RPG_GAMECORE_WAITCHIMERAWORKROUNDFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC95120)

namespace RPG::GameCore
{
	class WaitChimeraWorkRoundFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 WorkRoundID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITCHIMERAWORKROUNDFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitChimeraWorkRoundFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitChimeraWorkRoundFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITCHIMERAWORKROUNDFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitChimeraWorkRoundFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitChimeraWorkRoundFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITCHIMERAWORKROUNDFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
