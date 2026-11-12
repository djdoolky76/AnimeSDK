#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityTelevisionSeasonRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYTELEVISIONSEASONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E592E80)
#define RPG_GAMECORE_ACTIVITYTELEVISIONSEASONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E592BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityTelevisionSeasonRow_TypeDefinitionIndex = 12569;

	class ActivityTelevisionSeasonRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* BuffLevelBackgroundPathList; // 0x10
		::System::String* BuffLevelDefaultBackgroundPath; // 0x18
		::Il2CppArray<::System::String*>* BuffLevelIconPathList; // 0x20
		::System::UInt32 Season; // 0x28
		::System::UInt32 LevelMessageSubmission; // 0x2C
		::System::UInt32 FirstMainMissionID; // 0x30
		::System::UInt32 LastStageQuest; // 0x34
		::System::UInt32 LastStage; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONSEASONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityTelevisionSeasonRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityTelevisionSeasonRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONSEASONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
