#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleEntitySkillLevelWhiteBoxData; }
namespace RPG::GameCore { class BattleEntitySkillWhiteBoxData; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEENTITYSKILLWHITEBOXDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4579C0)
#define RPG_GAMECORE_BATTLEENTITYSKILLWHITEBOXDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D456D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleEntitySkillWhiteBoxData_TypeDefinitionIndex = 22751;

	class BattleEntitySkillWhiteBoxData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SkillID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* SkillTriggerKey; // 0x18
		::RPG::Client::TextID SkillName; // 0x20
		::RPG::Client::TextID SkillTag; // 0x30
		::RPG::Client::TextID SkillTypeDesc; // 0x40
		::System::String* SkillIcon; // 0x50
		::System::String* UltraSkillIcon; // 0x58
		::RPG::Client::TextID SkillDesc; // 0x60
		::RPG::Client::TextID SimpleSkillDesc; // 0x70
		::RPG::Client::TextID SkillNeed; // 0x80
		::Il2CppArray<::System::UInt32>* ExtraEffectIDList; // 0x90
		::Il2CppArray<::System::UInt32>* SimpleExtraEffectIDList; // 0x98
		::System::Int32 InitCoolDown; // 0xA0
		::System::Int32 CoolDown; // 0xA4
		::RPG::GameCore::FixPoint SPAdd; // 0xA8
		::RPG::GameCore::FixPoint SPBase; // 0xB0
		::RPG::GameCore::FixPoint SPNeed; // 0xB8
		::RPG::GameCore::FixPoint SPMultipleRatio; // 0xC0
		::RPG::GameCore::FixPoint BPNeed; // 0xC8
		::RPG::GameCore::FixPoint BPAdd; // 0xD0
		::RPG::GameCore::FixPoint DelayRatio; // 0xD8
		::RPG::GameCore::AttackDamageType StanceDamageType; // 0xE0
		::RPG::GameCore::AttackType AttackType; // 0xE4
		::RPG::GameCore::SkillEffect SkillEffect; // 0xE8
		::System::Byte _padding1[0x4];
		::RPG::GameCore::FixPoint SkillComboValueDelta; // 0xF0
		::System::UInt32 Level; // 0xF8
		::System::Byte _padding2[0x4];
		::Il2CppArray<::RPG::GameCore::BattleEntitySkillLevelWhiteBoxData*>* LevelDatas; // 0x100
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEENTITYSKILLWHITEBOXDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleEntitySkillWhiteBoxData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleEntitySkillWhiteBoxData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEENTITYSKILLWHITEBOXDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
