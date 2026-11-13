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
namespace RPG::GameCore { class AvatarServantSkillRow; }
namespace System { class String; }

#define RPG_GAMECORE_AVATARSERVANTSKILLROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2ED1C0)
#define RPG_GAMECORE_AVATARSERVANTSKILLROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1C2EA9C0)
#define RPG_GAMECORE_AVATARSERVANTSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C2EB7D0)
#define RPG_GAMECORE_AVATARSERVANTSKILLROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1C2ED0E0)
#define RPG_GAMECORE_AVATARSERVANTSKILLROW_RESET_OFFSET UNITYSDK_OFFSET(0x1C2ED140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarServantSkillRow_TypeDefinitionIndex = 12878;

	class AvatarServantSkillRow : public ::System::Object
	{
	public:
		::System::String* UltraSkillIcon; // 0x10
		::System::String* SkillIcon; // 0x18
		::System::String* SkillTriggerKey; // 0x20
		::Il2CppArray<::System::UInt32>* ExtraEffectIDList; // 0x28
		::Il2CppArray<::System::UInt32>* RatedRankID; // 0x30
		::Il2CppArray<::System::UInt32>* SimpleExtraEffectIDList; // 0x38
		::Il2CppArray<::RPG::GameCore::FixPoint>* ShowStanceList; // 0x40
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x48
		::Il2CppArray<::RPG::GameCore::FixPoint>* SimpleParamList; // 0x50
		::Il2CppArray<::System::UInt32>* RatedSkillTreeID; // 0x58
		::RPG::GameCore::FixPoint BPAdd; // 0x60
		::RPG::Client::TextID SkillNeed; // 0x68
		::RPG::GameCore::FixPoint SkillComboValueDelta; // 0x78
		::RPG::Client::TextID SkillTypeDesc; // 0x80
		::RPG::GameCore::FixPoint SPBase; // 0x90
		::RPG::Client::TextID SkillName; // 0x98
		::RPG::GameCore::FixPoint BPNeed; // 0xA8
		::RPG::Client::TextID SkillTag; // 0xB0
		::System::Int32 StanceDamageDisplay; // 0xC0
		::System::Boolean HideInUI; // 0xC4
		::System::Byte _padding0[0x3];
		::System::UInt32 SkillID; // 0xC8
		::RPG::GameCore::AttackDamageType StanceDamageType; // 0xCC
		::RPG::Client::TextID SimpleSkillDesc; // 0xD0
		::System::UInt32 MaxLevel; // 0xE0
		::RPG::GameCore::AttackType AttackType; // 0xE4
		::RPG::GameCore::FixPoint SPNeed; // 0xE8
		::RPG::GameCore::FixPoint SPAdd; // 0xF0
		::RPG::GameCore::FixPoint SPMultipleRatio; // 0xF8
		::RPG::Client::TextID SkillDesc; // 0x100
		::RPG::GameCore::FixPoint DelayRatio; // 0x110
		::RPG::GameCore::SkillEffect SkillEffect; // 0x118
		::System::UInt32 Level; // 0x11C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLROW_CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarServantSkillRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarServantSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarServantSkillRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarServantSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTSKILLROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
