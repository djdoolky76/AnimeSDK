#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingFesLevelConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGFESLEVELCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D58F810)
#define RPG_GAMECORE_CHENLINGFESLEVELCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D58F220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesLevelConfigRow_TypeDefinitionIndex = 11098;

	class ChenLingFesLevelConfigRow : public ::System::Object
	{
	public:
		::System::String* LevelName; // 0x10
		::Il2CppArray<::System::Int32>* LevelAbilityParamList; // 0x18
		::Il2CppArray<::System::UInt32>* LevelAbilityList; // 0x20
		::Il2CppArray<::System::UInt32>* ItemRuleGroupID; // 0x28
		::Il2CppArray<::System::UInt32>* RequiredScoreList; // 0x30
		::Il2CppArray<::System::UInt32>* VisitorRuleGroupID; // 0x38
		::Il2CppArray<::System::UInt32>* LevelDayDuration; // 0x40
		::Il2CppArray<::System::UInt32>* InitItemNumList; // 0x48
		::Il2CppArray<::System::UInt32>* AwardListID; // 0x50
		::Il2CppArray<::System::UInt32>* VisitorTimeInterval; // 0x58
		::System::UInt32 ID; // 0x60
		::RPG::GameCore::LevelType LevelType; // 0x64
		::System::Boolean IsFeverLevel; // 0x68
		::System::Byte _padding0[0x3];
		::System::Int32 WeekStarCount; // 0x6C
		::System::UInt32 UnlockSubMission; // 0x70
		::System::UInt32 LevelAbilityGap; // 0x74
		::System::Int32 TotalWeek; // 0x78
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
