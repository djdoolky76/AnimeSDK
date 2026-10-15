#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TakenMazePuzzleChallenge; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_TAKENMAZEPUZZLECHALLENGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB543D0)
#define RPG_GAMECORE_TAKENMAZEPUZZLECHALLENGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB54410)
#define RPG_GAMECORE_TAKENMAZEPUZZLECHALLENGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB54370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TakenMazePuzzleChallenge_TypeDefinitionIndex = 22009;

	class TakenMazePuzzleChallenge : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* MazePuzzleChallengeID; // 0x20
		::RPG::GameCore::DynamicString* AttachQuestID; // 0x28
		::System::Boolean AutoClosePuzzle; // 0x30
		::System::Boolean AutoResetPuzzle; // 0x31
		::System::Boolean AutoFinishChallenge; // 0x32
		::System::Byte _padding0[0x1];
		::System::UInt32 PrepareTime; // 0x34
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUIEnter; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnReset; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFail; // 0x48
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x50
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnWaitPrepareEnd; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAKENMAZEPUZZLECHALLENGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TakenMazePuzzleChallenge* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TakenMazePuzzleChallenge*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAKENMAZEPUZZLECHALLENGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TakenMazePuzzleChallenge* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TakenMazePuzzleChallenge*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAKENMAZEPUZZLECHALLENGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
