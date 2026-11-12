#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MusicRhythmGroupRow; }
namespace System { class String; }

#define RPG_GAMECORE_MUSICRHYTHMGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAE6920)
#define RPG_GAMECORE_MUSICRHYTHMGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EAE5DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MusicRhythmGroupRow_TypeDefinitionIndex = 14420;

	class MusicRhythmGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* LongInputTimeList; // 0x10
		::Il2CppArray<::System::Single>* LongInputUpTimeList; // 0x18
		::Il2CppArray<::System::UInt32>* RewardTrackIDList; // 0x20
		::System::String* GroupCoverImgPath; // 0x28
		::System::String* BGMpath; // 0x30
		::Il2CppArray<::System::Single>* InputTimeList; // 0x38
		::RPG::Client::TextID MapName; // 0x40
		::System::UInt32 Index; // 0x50
		::System::UInt32 MapInfoID; // 0x54
		::System::UInt32 ID; // 0x58
		::System::UInt32 UnlockSubMissionID; // 0x5C
		::RPG::Client::TextID GroupDesc; // 0x60
		::System::UInt32 TakeMissionID; // 0x70
		::System::UInt32 EntityGroupMission; // 0x74
		::RPG::Client::TextID GroupName; // 0x78
		::System::UInt32 EntranceID; // 0x88
		::System::UInt32 EntityGroup; // 0x8C
		::System::UInt32 Phase; // 0x90
		::System::UInt32 GotoID; // 0x94
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MusicRhythmGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MusicRhythmGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
