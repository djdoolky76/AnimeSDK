#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivitySummonGroupRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYSUMMONGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA9AD10)
#define RPG_GAMECORE_ACTIVITYSUMMONGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA9A390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivitySummonGroupRow_TypeDefinitionIndex = 12473;

	class ActivitySummonGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* AvatarSkillList; // 0x10
		::System::String* ImagePath; // 0x18
		::System::String* MonsterImagePath; // 0x20
		::Il2CppArray<::RPG::Client::TextID>* MonsterSkillDescList; // 0x28
		::System::String* MonsterMiddleIcon; // 0x30
		::System::String* OriginalImagePath; // 0x38
		::Il2CppArray<::System::String*>* BackgroundTrashImageList; // 0x40
		::Il2CppArray<::System::UInt32>* MonsterSkillList; // 0x48
		::Il2CppArray<::System::String*>* MasterImagePath; // 0x50
		::System::String* MiniImagePath; // 0x58
		::System::String* OriginalMiniImagePath; // 0x60
		::RPG::Client::TextID OriginalDesc; // 0x68
		::RPG::Client::TextID OriginalStageName; // 0x78
		::System::UInt32 GroupID; // 0x88
		::System::UInt32 SubMissionID; // 0x8C
		::System::UInt32 EntranceID; // 0x90
		::System::UInt32 MonsterEventID; // 0x94
		::RPG::Client::TextID MonsterName; // 0x98
		::RPG::Client::TextID Desc; // 0xA8
		::System::UInt32 MappingInfo; // 0xB8
		::System::UInt32 MazeBuffID; // 0xBC
		::RPG::Client::TextID MonsterDesc; // 0xC0
		::RPG::Client::TextID StageName; // 0xD0
		::System::UInt32 ActivityModuleID; // 0xE0
		::System::UInt32 GotoID; // 0xE4
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSUMMONGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivitySummonGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivitySummonGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSUMMONGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
