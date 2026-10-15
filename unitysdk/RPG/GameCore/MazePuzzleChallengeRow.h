#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazePuzzleChallengeRow; }

#define RPG_GAMECORE_MAZEPUZZLECHALLENGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D83C3F0)
#define RPG_GAMECORE_MAZEPUZZLECHALLENGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D83BB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePuzzleChallengeRow_TypeDefinitionIndex = 14033;

	class MazePuzzleChallengeRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ProgressList; // 0x10
		::System::UInt32 IsBeginPrepare; // 0x18
		::System::Boolean IsTopPriority; // 0x1C
		::System::Boolean IsShowToast; // 0x1D
		::System::Boolean IsShowWaypoint; // 0x1E
		::System::Byte _padding0[0x1];
		::System::UInt32 NormalModeID; // 0x20
		::System::UInt32 RemainingStep; // 0x24
		::System::UInt32 SpecialModeID; // 0x28
		::System::UInt32 LimitTime; // 0x2C
		::System::UInt32 MazePuzzleID; // 0x30
		::System::UInt32 IsResetable; // 0x34
		::System::UInt32 TutorialID; // 0x38
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
