#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FinalityBattleDifficultyLevel.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityFinalityBattleLevelRow; }

#define RPG_GAMECORE_ACTIVITYFINALITYBATTLELEVELROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D364970)
#define RPG_GAMECORE_ACTIVITYFINALITYBATTLELEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3646B0)

namespace RPG::GameCore
{
	class ActivityFinalityBattleLevelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SupportingRoleList; // 0x10
		::Il2CppArray<::System::UInt32>* SupportingAllRoleList; // 0x18
		::Il2CppArray<::System::UInt32>* BattleTargetList; // 0x20
		::System::UInt32 ID; // 0x28
		::System::UInt32 UnlockQuest; // 0x2C
		::System::UInt32 StageID; // 0x30
		::System::UInt32 BattleAreaID; // 0x34
		::RPG::GameCore::FinalityBattleDifficultyLevel DifficultyLevel; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFINALITYBATTLELEVELROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityFinalityBattleLevelRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityFinalityBattleLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFINALITYBATTLELEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
