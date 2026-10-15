#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class FinishMazePuzzleChallenge; }

#define RPG_GAMECORE_FINISHMAZEPUZZLECHALLENGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A95D0)
#define RPG_GAMECORE_FINISHMAZEPUZZLECHALLENGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6A95E0)
#define RPG_GAMECORE_FINISHMAZEPUZZLECHALLENGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6A95A0)

namespace RPG::GameCore
{
	class FinishMazePuzzleChallenge : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* MazePuzzleChallengeID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHMAZEPUZZLECHALLENGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FinishMazePuzzleChallenge* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FinishMazePuzzleChallenge*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHMAZEPUZZLECHALLENGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FinishMazePuzzleChallenge* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FinishMazePuzzleChallenge*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHMAZEPUZZLECHALLENGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
