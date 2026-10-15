#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CancelMazePuzzleChallenge; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_CANCELMAZEPUZZLECHALLENGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5294B0)
#define RPG_GAMECORE_CANCELMAZEPUZZLECHALLENGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5294C0)
#define RPG_GAMECORE_CANCELMAZEPUZZLECHALLENGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D529480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CancelMazePuzzleChallenge_TypeDefinitionIndex = 20375;

	class CancelMazePuzzleChallenge : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* MazePuzzleChallengeID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CANCELMAZEPUZZLECHALLENGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CancelMazePuzzleChallenge* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CancelMazePuzzleChallenge*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CANCELMAZEPUZZLECHALLENGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CancelMazePuzzleChallenge* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CancelMazePuzzleChallenge*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CANCELMAZEPUZZLECHALLENGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
