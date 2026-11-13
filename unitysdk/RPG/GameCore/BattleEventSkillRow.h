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
namespace RPG::GameCore { class BattleEventSkillRow; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEEVENTSKILLROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1C313CF0)
#define RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1C3124C0)
#define RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C3130B0)
#define RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1C3123F0)
#define RPG_GAMECORE_BATTLEEVENTSKILLROW_RESET_OFFSET UNITYSDK_OFFSET(0x1C312450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleEventSkillRow_TypeDefinitionIndex = 12931;

	class BattleEventSkillRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ShowStanceList; // 0x10
		::System::String* SkillButtonEffType; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* SimpleParamList; // 0x20
		::System::String* UltraSkillIcon; // 0x28
		::System::String* CutinPath; // 0x30
		::System::String* SkillIcon; // 0x38
		::System::String* SkillTriggerKey; // 0x40
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x48
		::RPG::GameCore::FixPoint SPMultipleRatio; // 0x50
		::System::UInt32 SkillID; // 0x58
		::RPG::GameCore::AttackType AttackType; // 0x5C
		::RPG::GameCore::FixPoint BPNeed; // 0x60
		::RPG::GameCore::FixPoint SPAdd; // 0x68
		::System::Int32 StanceDamageDisplay; // 0x70
		::RPG::GameCore::AttackDamageType StanceDamageType; // 0x74
		::RPG::Client::TextID SkillTag; // 0x78
		::RPG::GameCore::FixPoint SkillComboValueDelta; // 0x88
		::RPG::GameCore::FixPoint SPBase; // 0x90
		::RPG::GameCore::FixPoint BPAdd; // 0x98
		::RPG::Client::TextID SkillNeed; // 0xA0
		::RPG::GameCore::FixPoint DelayRatio; // 0xB0
		::RPG::Client::TextID SkillTypeDesc; // 0xB8
		::RPG::GameCore::SkillEffect SkillEffect; // 0xC8
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID SkillName; // 0xD0
		::RPG::GameCore::FixPoint SPNeed; // 0xE0
		::RPG::Client::TextID SkillDesc; // 0xE8
		::RPG::Client::TextID SimpleSkillDesc; // 0xF8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTSKILLROW_CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTSKILLROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleEventSkillRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleEventSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleEventSkillRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleEventSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
