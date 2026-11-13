#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazePuzzleChallengeRow; }

#define RPG_GAMECORE_MAZEPUZZLECHALLENGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB70520)
#define RPG_GAMECORE_MAZEPUZZLECHALLENGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB6FC30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePuzzleChallengeRow_TypeDefinitionIndex = 14190;

	class MazePuzzleChallengeRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ProgressList; // 0x10
		::System::UInt32 RemainingStep; // 0x18
		::System::UInt32 SpecialModeID; // 0x1C
		::System::UInt32 TutorialID; // 0x20
		::System::UInt32 MazePuzzleID; // 0x24
		::System::UInt32 IsBeginPrepare; // 0x28
		::System::UInt32 LimitTime; // 0x2C
		::System::UInt32 NormalModeID; // 0x30
		::System::UInt32 IsResetable; // 0x34
		::System::Boolean IsShowWaypoint; // 0x38
		::System::Boolean IsTopPriority; // 0x39
		::System::Boolean IsShowToast; // 0x3A
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECHALLENGEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MazePuzzleChallengeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MazePuzzleChallengeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECHALLENGEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
