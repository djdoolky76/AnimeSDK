#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityElationStageRow; }
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYELATIONSTAGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E563740)
#define RPG_GAMECORE_ACTIVITYELATIONSTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E563030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityElationStageRow_TypeDefinitionIndex = 11372;

	class ActivityElationStageRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* GiftBoxLevel; // 0x10
		::Il2CppArray<::System::UInt32>* BattleTargetList; // 0x18
		::Il2CppArray<::System::UInt32>* AvailableAvatarList; // 0x20
		::Il2CppArray<::System::UInt32>* ModifiedAvatarIDList; // 0x28
		::Il2CppArray<::System::UInt32>* SpecialAvatarList; // 0x30
		::Il2CppArray<::System::UInt32>* MonsterList; // 0x38
		::RPG::GameCore::ConditionParam* UnlockCondition; // 0x40
		::System::String* ImagePath; // 0x48
		::System::UInt32 TutorialGuideGroupID; // 0x50
		::System::UInt32 IsModifiedAvatarFixed; // 0x54
		::RPG::Client::TextID StageName; // 0x58
		::System::UInt32 ID; // 0x68
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID LevelDes_In; // 0x70
		::RPG::Client::TextID LevelDes_In_Down; // 0x80
		::RPG::Client::TextID LevelDes_Out; // 0x90
		::System::UInt32 NewModifiedAvatarID; // 0xA0
		::System::UInt32 PerfectWave; // 0xA4
		::System::UInt32 EventID; // 0xA8
		::System::UInt32 UIEnterBattleAreaID; // 0xAC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYELATIONSTAGEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityElationStageRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityElationStageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYELATIONSTAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
