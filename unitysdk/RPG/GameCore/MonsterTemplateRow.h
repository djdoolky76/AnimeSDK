#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/System/Object.h"
class DKNHMEHFNDB;
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonsterTemplateRow; }
namespace System { class String; }

#define RPG_GAMECORE_MONSTERTEMPLATEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E47F180)
#define RPG_GAMECORE_MONSTERTEMPLATEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E47DF50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterTemplateRow_TypeDefinitionIndex = 14334;

	class MonsterTemplateRow : public ::System::Object
	{
	public:
		::System::String* ManikinPrefabPath; // 0x10
		::System::String* AIPath; // 0x18
		::System::String* PrefabPath; // 0x20
		::Il2CppArray<::RPG::Client::TextID>* MonsterStrategy; // 0x28
		::System::String* IconPath; // 0x30
		::Il2CppArray<::System::UInt32>* NPCMonsterList; // 0x38
		::System::String* JsonConfig; // 0x40
		::System::String* ManikinImagePath; // 0x48
		::Il2CppArray<::DKNHMEHFNDB*>* AISkillSequence; // 0x50
		::System::String* ManikinConfigPath; // 0x58
		::System::String* ImagePath; // 0x60
		::System::String* RoundIconPath; // 0x68
		::RPG::GameCore::FixPoint SpeedBase; // 0x70
		::RPG::GameCore::FixPoint StatusResistanceBase; // 0x78
		::RPG::GameCore::FixPoint MinimumFatigueRatio; // 0x80
		::RPG::Client::TextID MonsterName; // 0x88
		::System::UInt32 MonsterTemplateID; // 0x98
		::System::UInt32 MonsterCampID; // 0x9C
		::System::Int32 AtlasSortID; // 0xA0
		::System::UInt32 TemplateGroupID; // 0xA4
		::RPG::GameCore::FixPoint AttackBase; // 0xA8
		::RPG::GameCore::MonsterRank Rank; // 0xB0
		::System::UInt32 NatureID; // 0xB4
		::RPG::GameCore::FixPoint StanceModifyValue; // 0xB8
		::RPG::GameCore::FixPoint CriticalDamageBase; // 0xC0
		::RPG::GameCore::FixPoint CriticalChanceBase; // 0xC8
		::RPG::GameCore::FixPoint InitialDelayRatio; // 0xD0
		::RPG::GameCore::FixPoint HPBase; // 0xD8
		::System::Int32 StanceCount; // 0xE0
		::RPG::GameCore::AttackDamageType StanceType; // 0xE4
		::RPG::GameCore::FixPoint SpeedModifyValue; // 0xE8
		::RPG::GameCore::FixPoint DefenceBase; // 0xF0
		::RPG::GameCore::FixPoint StanceBase; // 0xF8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEMPLATEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterTemplateRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterTemplateRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEMPLATEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
