#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StartChimeraWorkRound; }

#define RPG_GAMECORE_STARTCHIMERAWORKROUND_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB1C430)
#define RPG_GAMECORE_STARTCHIMERAWORKROUND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB1C440)
#define RPG_GAMECORE_STARTCHIMERAWORKROUND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB1C400)

namespace RPG::GameCore
{
	class StartChimeraWorkRound : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 WorkRoundID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTCHIMERAWORKROUND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartChimeraWorkRound* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartChimeraWorkRound*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTCHIMERAWORKROUND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartChimeraWorkRound* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartChimeraWorkRound*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTCHIMERAWORKROUND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
