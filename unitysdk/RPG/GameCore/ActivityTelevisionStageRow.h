#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityTelevisionStageRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYTELEVISIONSTAGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA9DBE0)
#define RPG_GAMECORE_ACTIVITYTELEVISIONSTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA9D500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityTelevisionStageRow_TypeDefinitionIndex = 12567;

	class ActivityTelevisionStageRow : public ::System::Object
	{
	public:
		::System::String* OriginalImagePath; // 0x10
		::System::String* OriginalOutlineImagePath; // 0x18
		::System::String* OriginalMiniImagePath; // 0x20
		::System::String* MiniImagePath; // 0x28
		::System::String* ImagePath; // 0x30
		::RPG::Client::TextID StageName; // 0x38
		::System::UInt32 MissionID; // 0x48
		::System::UInt32 QuestGroupID; // 0x4C
		::RPG::Client::TextID OriginalStageName; // 0x50
		::RPG::Client::TextID ChannelName; // 0x60
		::System::UInt32 MappingInfo; // 0x70
		::System::UInt32 TelevisionID; // 0x74
		::RPG::Client::TextID OriginalDesc; // 0x78
		::System::UInt32 Season; // 0x88
		::System::UInt32 GotoID; // 0x8C
		::System::UInt32 EntranceID; // 0x90
		::System::UInt32 ActivityModuleID; // 0x94
		::RPG::Client::TextID Desc; // 0x98
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONSTAGEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityTelevisionStageRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityTelevisionStageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONSTAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
