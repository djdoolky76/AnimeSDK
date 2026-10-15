#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ModifyMazePuzzleChallenge; }

#define RPG_GAMECORE_MODIFYMAZEPUZZLECHALLENGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8984A0)
#define RPG_GAMECORE_MODIFYMAZEPUZZLECHALLENGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8984B0)
#define RPG_GAMECORE_MODIFYMAZEPUZZLECHALLENGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D898470)

namespace RPG::GameCore
{
	class ModifyMazePuzzleChallenge : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 MazePuzzleChallengeID; // 0x18
		::System::Int32 RemainStep; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYMAZEPUZZLECHALLENGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyMazePuzzleChallenge* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyMazePuzzleChallenge*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYMAZEPUZZLECHALLENGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyMazePuzzleChallenge* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyMazePuzzleChallenge*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYMAZEPUZZLECHALLENGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
