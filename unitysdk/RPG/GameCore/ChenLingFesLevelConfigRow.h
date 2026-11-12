#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingFesLevelConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGFESLEVELCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E79FAF0)
#define RPG_GAMECORE_CHENLINGFESLEVELCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E79F500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesLevelConfigRow_TypeDefinitionIndex = 11114;

	class ChenLingFesLevelConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* VisitorRuleGroupID; // 0x10
		::Il2CppArray<::System::UInt32>* VisitorTimeInterval; // 0x18
		::Il2CppArray<::System::UInt32>* RequiredScoreList; // 0x20
		::Il2CppArray<::System::UInt32>* AwardListID; // 0x28
		::Il2CppArray<::System::Int32>* LevelAbilityParamList; // 0x30
		::Il2CppArray<::System::UInt32>* LevelDayDuration; // 0x38
		::Il2CppArray<::System::UInt32>* ItemRuleGroupID; // 0x40
		::Il2CppArray<::System::UInt32>* InitItemNumList; // 0x48
		::Il2CppArray<::System::UInt32>* LevelAbilityList; // 0x50
		::System::String* LevelName; // 0x58
		::System::Boolean IsFeverLevel; // 0x60
		::System::Byte _padding0[0x3];
		::System::UInt32 ID; // 0x64
		::System::Int32 TotalWeek; // 0x68
		::System::UInt32 UnlockSubMission; // 0x6C
		::System::UInt32 LevelAbilityGap; // 0x70
		::RPG::GameCore::LevelType LevelType; // 0x74
		::System::Int32 WeekStarCount; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESLEVELCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingFesLevelConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingFesLevelConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESLEVELCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
