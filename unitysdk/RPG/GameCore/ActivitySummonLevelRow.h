#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActivitySummonDifficulty.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivitySummonLevelRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYSUMMONLEVELROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D380CD0)
#define RPG_GAMECORE_ACTIVITYSUMMONLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D380950)

namespace RPG::GameCore
{
	class ActivitySummonLevelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TrialAvatarList; // 0x10
		::Il2CppArray<::System::UInt32>* MasterAvatarList; // 0x18
		::System::String* ImagePath; // 0x20
		::Il2CppArray<::System::UInt32>* ReplaceMasterAvatarList; // 0x28
		::Il2CppArray<::System::UInt32>* ReplaceTrialAvatarList; // 0x30
		::Il2CppArray<::System::UInt32>* BattleTargetList; // 0x38
		::System::UInt32 EventID; // 0x40
		::RPG::GameCore::ActivitySummonDifficulty DifficultyLevel; // 0x44
		::System::UInt32 GroupID; // 0x48
		::System::UInt32 UIEnterBattleAreaID; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSUMMONLEVELROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivitySummonLevelRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivitySummonLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSUMMONLEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
