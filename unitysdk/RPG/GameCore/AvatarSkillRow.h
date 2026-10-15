#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class FCOEMCEDLNL;
class GHPFNOBNMAJ;
class PMOFCNKNJCA;
namespace RPG::GameCore { class AvatarSkillRow; }
namespace System { class String; }

#define RPG_GAMECORE_AVATARSKILLROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D42B940)
#define RPG_GAMECORE_AVATARSKILLROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D427C60)
#define RPG_GAMECORE_AVATARSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D428CD0)
#define RPG_GAMECORE_AVATARSKILLROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D42B860)
#define RPG_GAMECORE_AVATARSKILLROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D42B8C0)

namespace RPG::GameCore
{
	class AvatarSkillRow : public ::System::Object
	{
	public:
		::Il2CppArray<::GHPFNOBNMAJ*>* ShowHealList; // 0x10
		::System::String* SkillTriggerKey; // 0x18
		::Il2CppArray<::System::String*>* LevelUpCostList; // 0x20
		::System::String* SkillIcon; // 0x28
		::System::String* UltraSkillIcon; // 0x30
		::Il2CppArray<::PMOFCNKNJCA*>* ShowDamageList; // 0x38
		::Il2CppArray<::System::UInt32>* SimpleExtraEffectIDList; // 0x40
		::Il2CppArray<::System::UInt32>* RatedSkillTreeID; // 0x48
		::Il2CppArray<::System::UInt32>* ExtraEffectIDList; // 0x50
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x58
		::Il2CppArray<::RPG::GameCore::FixPoint>* ShowStanceList; // 0x60
		::Il2CppArray<::System::UInt32>* RatedRankID; // 0x68
		::Il2CppArray<::RPG::GameCore::FixPoint>* SimpleParamList; // 0x70
		::System::UInt32 Level; // 0x78
		::System::UInt32 MaxLevel; // 0x7C
		::RPG::Client::TextID SkillName; // 0x80
		::System::Int32 InitCoolDown; // 0x90
		::System::UInt32 SkillID; // 0x94
		::RPG::Client::TextID SkillTag; // 0x98
		::RPG::GameCore::FixPoint SkillComboValueDelta; // 0xA8
		::RPG::Client::TextID SkillDesc; // 0xB0
		::System::Int32 StanceDamageDisplay; // 0xC0
		::System::Boolean HideInUI; // 0xC4
		::System::Byte _padding0[0x3];
		::RPG::Client::TextID SkillTypeDesc; // 0xC8
		::RPG::GameCore::FixPoint DelayRatio; // 0xD8
		::RPG::GameCore::AttackDamageType StanceDamageType; // 0xE0
		::System::Int32 CoolDown; // 0xE4
		::RPG::Client::TextID SkillNeed; // 0xE8
		::RPG::GameCore::FixPoint SPBase; // 0xF8
		::System::UInt32 LevelUpLevelCond; // 0x100
		::System::UInt32 LevelUpRankCond; // 0x104
		::RPG::GameCore::FixPoint SPAdd; // 0x108
		::RPG::GameCore::AttackType AttackType; // 0x110
		::RPG::GameCore::SkillEffect SkillEffect; // 0x114
		::RPG::GameCore::FixPoint SPMultipleRatio; // 0x118
		::RPG::Client::TextID SimpleSkillDesc; // 0x120
		::RPG::GameCore::FixPoint BPNeed; // 0x130
		::RPG::GameCore::FixPoint BPAdd; // 0x138
		::RPG::GameCore::FixPoint SPNeed; // 0x140
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROW_CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarSkillRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarSkillRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
