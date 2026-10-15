#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetMazePuzzleChallengeProgress; }

#define RPG_GAMECORE_SETMAZEPUZZLECHALLENGEPROGRESS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB92A0)
#define RPG_GAMECORE_SETMAZEPUZZLECHALLENGEPROGRESS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB92C0)
#define RPG_GAMECORE_SETMAZEPUZZLECHALLENGEPROGRESS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB9260)

namespace RPG::GameCore
{
	class SetMazePuzzleChallengeProgress : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 MazePuzzleChallengeID; // 0x18
		::System::Int32 ProgressIndex; // 0x1C
		::System::Int32 ProgressAdd; // 0x20
		::System::Int32 ProgressSet; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMAZEPUZZLECHALLENGEPROGRESS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMazePuzzleChallengeProgress* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMazePuzzleChallengeProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMAZEPUZZLECHALLENGEPROGRESS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMazePuzzleChallengeProgress* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMazePuzzleChallengeProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMAZEPUZZLECHALLENGEPROGRESS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
