#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityTelevisionStageRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYTELEVISIONSTAGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E593570)
#define RPG_GAMECORE_ACTIVITYTELEVISIONSTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E592E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityTelevisionStageRow_TypeDefinitionIndex = 12567;

	class ActivityTelevisionStageRow : public ::System::Object
	{
	public:
		::System::String* MiniImagePath; // 0x10
		::System::String* OriginalImagePath; // 0x18
		::System::String* ImagePath; // 0x20
		::System::String* OriginalOutlineImagePath; // 0x28
		::System::String* OriginalMiniImagePath; // 0x30
		::System::UInt32 ActivityModuleID; // 0x38
		::System::UInt32 QuestGroupID; // 0x3C
		::System::UInt32 GotoID; // 0x40
		::System::UInt32 MissionID; // 0x44
		::RPG::Client::TextID OriginalStageName; // 0x48
		::RPG::Client::TextID StageName; // 0x58
		::RPG::Client::TextID ChannelName; // 0x68
		::RPG::Client::TextID OriginalDesc; // 0x78
		::RPG::Client::TextID Desc; // 0x88
		::System::UInt32 TelevisionID; // 0x98
		::System::UInt32 Season; // 0x9C
		::System::UInt32 MappingInfo; // 0xA0
		::System::UInt32 EntranceID; // 0xA4
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
