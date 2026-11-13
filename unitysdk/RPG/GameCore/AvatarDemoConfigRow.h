#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarDemoStageType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarDemoConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_AVATARDEMOCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC6940)
#define RPG_GAMECORE_AVATARDEMOCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DEC5D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarDemoConfigRow_TypeDefinitionIndex = 12849;

	class AvatarDemoConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TrialAvatarList; // 0x10
		::Il2CppArray<::System::UInt32>* NpcMonsterIDList1; // 0x18
		::Il2CppArray<::System::String*>* OverrideDisplaySkillTriggerKeyList; // 0x20
		::Il2CppArray<::System::UInt32>* SPList; // 0x28
		::System::String* OperationRecordPath; // 0x30
		::Il2CppArray<::System::UInt32>* ConfigList1; // 0x38
		::Il2CppArray<::System::UInt32>* EventIDList1; // 0x40
		::RPG::Client::TextID AvatarDemoTitle; // 0x48
		::RPG::Client::TextID AvatarDemoGuide; // 0x58
		::System::UInt32 GuideGroupID; // 0x68
		::System::UInt32 ScoringGroupID; // 0x6C
		::System::UInt32 RaidID; // 0x70
		::System::Boolean NormalWaveNotShowDetail; // 0x74
		::System::Boolean EnableMazeSkillEffect; // 0x75
		::System::Boolean EnableSwitchAvatar; // 0x76
		::System::Byte _padding0[0x1];
		::System::UInt32 MazeGroupID1; // 0x78
		::System::UInt32 RewardID; // 0x7C
		::System::UInt32 MapEntranceID; // 0x80
		::System::UInt32 StageID; // 0x84
		::RPG::GameCore::AvatarDemoStageType StageType; // 0x88
		::System::UInt32 AvatarID; // 0x8C
		::System::UInt32 RandomSeed; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarDemoConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarDemoConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
