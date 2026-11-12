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

#define RPG_GAMECORE_RAIDCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB80F70)
#define RPG_GAMECORE_RAIDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB7FA30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaidConfigRow_TypeDefinitionIndex = 14747;

	class RaidConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::RaidRecoverType>* RecoverType; // 0x10
		::Il2CppArray<::System::UInt32>* LimitIDList; // 0x18
		::Il2CppArray<::System::UInt32>* TeamLimitIDList; // 0x20
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* DamageType; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* BuffParamList; // 0x30
		::Il2CppArray<::System::UInt32>* MainMissionIDList; // 0x38
		::Il2CppArray<::RPG::GameCore::RaidTagType>* RaidTagList; // 0x40
		::Il2CppArray<::System::UInt32>* MonsterList; // 0x48
		::Il2CppArray<::System::UInt32>* UnlockWorldLevel; // 0x50
		::Il2CppArray<::System::UInt32>* MonsterHideList; // 0x58
		::Il2CppArray<::System::UInt32>* RewardList; // 0x60
		::Il2CppArray<::System::UInt32>* RaidTargetID; // 0x68
		::System::String* EntrancePageBGImagePath; // 0x70
		::Il2CppArray<::System::UInt32>* TrialAvatarList; // 0x78
		::System::UInt32 LockCaptainAvatarID; // 0x80
		::System::UInt32 HardLevel; // 0x84
		::RPG::Client::TextID RaidName; // 0x88
		::RPG::Client::TextID BuffDesc; // 0x98
		::System::UInt32 MainMissionIDAfter; // 0xA8
		::System::UInt32 DisplayEventID; // 0xAC
		::System::Boolean IsHiddenAreaMap; // 0xB0
		::System::Boolean IsShowMonsterSummon; // 0xB1
		::System::Boolean LockCaptain; // 0xB2
		::System::Boolean AutoObtainDamageType; // 0xB3
		::System::UInt32 DifficultyAdjustmentType; // 0xB4
		::RPG::GameCore::RaidEnterType EnterType; // 0xB8
		::RPG::GameCore::RaidConfigType Type; // 0xBC
		::System::Boolean SkipRewardOnFinish; // 0xC0
		::System::Boolean IsEntryByProp; // 0xC1
		::System::Boolean SkipJoinLineup; // 0xC2
		::System::Byte _padding0[0x1];
		::System::UInt32 MainMissionIDBefore; // 0xC4
		::System::Int32 RecommendLevel; // 0xC8
		::System::UInt32 FinishEntranceID; // 0xCC
		::RPG::Client::TextID RaidDesc; // 0xD0
		::RPG::GameCore::RaidTeamType TeamType; // 0xE0
		::System::UInt32 MappingInfoID; // 0xE4
		::System::UInt32 RaidID; // 0xE8
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
