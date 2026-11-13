#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
class FCOEMCEDLNL;
class GHPFNOBNMAJ;
class PMOFCNKNJCA;
namespace RPG::GameCore { class AvatarSkillRow; }
namespace System { class String; }

#define RPG_GAMECORE_AVATARSKILLROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2F1BE0)
#define RPG_GAMECORE_AVATARSKILLROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1C2EDEB0)
#define RPG_GAMECORE_AVATARSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C2EEF70)
#define RPG_GAMECORE_AVATARSKILLROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1C2F1B50)
#define RPG_GAMECORE_AVATARSKILLROW_RESET_OFFSET UNITYSDK_OFFSET(0x1C2F1BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarSkillRow_TypeDefinitionIndex = 12805;

	class AvatarSkillRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SimpleExtraEffectIDList; // 0x10
		::Il2CppArray<::PMOFCNKNJCA*>* ShowDamageList; // 0x18
		::System::String* UltraSkillIcon; // 0x20
		::Il2CppArray<::System::UInt32>* ExtraEffectIDList; // 0x28
		::Il2CppArray<::GHPFNOBNMAJ*>* ShowHealList; // 0x30
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x38
		::Il2CppArray<::System::UInt32>* RatedSkillTreeID; // 0x40
		::Il2CppArray<::System::UInt32>* RatedRankID; // 0x48
		::Il2CppArray<::RPG::GameCore::FixPoint>* ShowStanceList; // 0x50
		::Il2CppArray<::System::UInt32>* RelatedExRankIDList; // 0x58
		::System::String* SkillIcon; // 0x60
		::Il2CppArray<::System::String*>* LevelUpCostList; // 0x68
		::System::String* SkillTriggerKey; // 0x70
		::Il2CppArray<::RPG::GameCore::FixPoint>* SimpleParamList; // 0x78
		::RPG::GameCore::FixPoint SPAdd; // 0x80
		::RPG::GameCore::FixPoint SkillComboValueDelta; // 0x88
		::RPG::GameCore::FixPoint SPMultipleRatio; // 0x90
		::System::UInt32 LevelUpLevelCond; // 0x98
		::System::UInt32 LevelUpRankCond; // 0x9C
		::RPG::GameCore::AttackDamageType StanceDamageType; // 0xA0
		::System::UInt32 MaxLevel; // 0xA4
		::RPG::GameCore::FixPoint DelayRatio; // 0xA8
		::RPG::Client::TextID SkillNeed; // 0xB0
		::System::UInt32 SkillID; // 0xC0
		::RPG::GameCore::AttackType AttackType; // 0xC4
		::RPG::GameCore::FixPoint SPBase; // 0xC8
		::RPG::Client::TextID SkillName; // 0xD0
		::RPG::Client::TextID SkillDesc; // 0xE0
		::RPG::GameCore::FixPoint BPAdd; // 0xF0
		::RPG::GameCore::FixPoint BPNeed; // 0xF8
		::RPG::GameCore::FixPoint SPNeed; // 0x100
		::RPG::Client::TextID SkillTypeDesc; // 0x108
		::RPG::Client::TextID SimpleSkillDesc; // 0x118
		::RPG::GameCore::SkillEffect SkillEffect; // 0x128
		::System::Boolean HideInUI; // 0x12C
		::System::Byte _padding0[0x3];
		::System::UInt32 Level; // 0x130
		::System::Int32 InitCoolDown; // 0x134
		::System::Int32 CoolDown; // 0x138
		::System::Int32 StanceDamageDisplay; // 0x13C
		::RPG::Client::TextID SkillTag; // 0x140
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROW_CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROW_FROMTABLEOFFSET_OFFSET))(this, a1);
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
