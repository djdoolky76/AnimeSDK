#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PrepareFinishMazePuzzleChallenge; }

#define RPG_GAMECORE_PREPAREFINISHMAZEPUZZLECHALLENGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D912CA0)
#define RPG_GAMECORE_PREPAREFINISHMAZEPUZZLECHALLENGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D912CB0)
#define RPG_GAMECORE_PREPAREFINISHMAZEPUZZLECHALLENGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D912C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PrepareFinishMazePuzzleChallenge_TypeDefinitionIndex = 22011;

	class PrepareFinishMazePuzzleChallenge : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* MazePuzzleChallengeID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREPAREFINISHMAZEPUZZLECHALLENGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PrepareFinishMazePuzzleChallenge* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PrepareFinishMazePuzzleChallenge*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREPAREFINISHMAZEPUZZLECHALLENGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PrepareFinishMazePuzzleChallenge* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PrepareFinishMazePuzzleChallenge*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREPAREFINISHMAZEPUZZLECHALLENGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
