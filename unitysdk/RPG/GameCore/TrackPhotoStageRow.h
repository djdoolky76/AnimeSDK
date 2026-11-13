#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrackPhotoStageRow; }
namespace System { class String; }

#define RPG_GAMECORE_TRACKPHOTOSTAGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5D6C90)
#define RPG_GAMECORE_TRACKPHOTOSTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F5D6670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrackPhotoStageRow_TypeDefinitionIndex = 12575;

	class TrackPhotoStageRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* JunkNumList; // 0x10
		::Il2CppArray<::System::Single>* XYRange; // 0x18
		::System::String* ImagePath; // 0x20
		::Il2CppArray<::System::UInt32>* StarList; // 0x28
		::RPG::Client::TextID StageName; // 0x30
		::System::UInt32 ActivityModuleID; // 0x40
		::System::UInt32 TotalTrashCanNum; // 0x44
		::RPG::Client::TextID StageLocation; // 0x48
		::System::UInt32 MaxScore; // 0x58
		::System::UInt32 UnlockSubMissionID; // 0x5C
		::System::UInt32 RaidID; // 0x60
		::System::UInt32 MainMissionID; // 0x64
		::System::UInt32 StageID; // 0x68
		::System::Single DisLimit; // 0x6C
		::RPG::Client::TextID StageDesc; // 0x70
		::System::Single Fov; // 0x80
		::System::Single TrackMoveSpeed; // 0x84
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKPHOTOSTAGEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrackPhotoStageRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrackPhotoStageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKPHOTOSTAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
