#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RaidConfigType.h"
#include "unitysdk/RPG/GameCore/RaidEnterType.h"
#include "unitysdk/RPG/GameCore/RaidRecoverType.h"
#include "unitysdk/RPG/GameCore/RaidTagType.h"
#include "unitysdk/RPG/GameCore/RaidTeamType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RaidConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_RAIDCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F224CB0)
#define RPG_GAMECORE_RAIDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F223770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaidConfigRow_TypeDefinitionIndex = 14747;

	class RaidConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MainMissionIDList; // 0x10
		::Il2CppArray<::System::UInt32>* LimitIDList; // 0x18
		::Il2CppArray<::System::UInt32>* UnlockWorldLevel; // 0x20
		::Il2CppArray<::System::UInt32>* MonsterList; // 0x28
		::Il2CppArray<::System::UInt32>* MonsterHideList; // 0x30
		::Il2CppArray<::System::UInt32>* TeamLimitIDList; // 0x38
		::System::String* EntrancePageBGImagePath; // 0x40
		::Il2CppArray<::System::UInt32>* RaidTargetID; // 0x48
		::Il2CppArray<::RPG::GameCore::FixPoint>* BuffParamList; // 0x50
		::Il2CppArray<::System::UInt32>* RewardList; // 0x58
		::Il2CppArray<::System::UInt32>* TrialAvatarList; // 0x60
		::Il2CppArray<::RPG::GameCore::RaidTagType>* RaidTagList; // 0x68
		::Il2CppArray<::RPG::GameCore::RaidRecoverType>* RecoverType; // 0x70
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* DamageType; // 0x78
		::System::UInt32 FinishEntranceID; // 0x80
		::RPG::GameCore::RaidConfigType Type; // 0x84
		::System::Boolean LockCaptain; // 0x88
		::System::Boolean IsShowMonsterSummon; // 0x89
		::System::Boolean SkipJoinLineup; // 0x8A
		::System::Boolean IsEntryByProp; // 0x8B
		::System::Boolean AutoObtainDamageType; // 0x8C
		::System::Boolean SkipRewardOnFinish; // 0x8D
		::System::Boolean IsHiddenAreaMap; // 0x8E
		::System::Byte _padding0[0x1];
		::RPG::GameCore::RaidEnterType EnterType; // 0x90
		::RPG::GameCore::RaidTeamType TeamType; // 0x94
		::RPG::Client::TextID BuffDesc; // 0x98
		::System::UInt32 HardLevel; // 0xA8
		::System::UInt32 LockCaptainAvatarID; // 0xAC
		::System::UInt32 MappingInfoID; // 0xB0
		::System::Int32 RecommendLevel; // 0xB4
		::System::UInt32 DifficultyAdjustmentType; // 0xB8
		::System::UInt32 DisplayEventID; // 0xBC
		::System::UInt32 MainMissionIDAfter; // 0xC0
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID RaidDesc; // 0xC8
		::RPG::Client::TextID RaidName; // 0xD8
		::System::UInt32 MainMissionIDBefore; // 0xE8
		::System::UInt32 RaidID; // 0xEC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RaidConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RaidConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
