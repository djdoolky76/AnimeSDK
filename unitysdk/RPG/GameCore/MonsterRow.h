#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AetherSpiritType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class AOKFCBEPNNA;
class DKNHMEHFNDB;
class FCOEMCEDLNL;
class JDOFOPKMEFJ;
class PNIHHKFGKPN;
namespace RPG::GameCore { class AetherDivideMonsterRow; }
namespace RPG::GameCore { class ElementResistanceConfig; }
namespace RPG::GameCore { class MonsterResistEntry; }
namespace RPG::GameCore { class MonsterRow; }
namespace System { class String; }

#define RPG_GAMECORE_MONSTERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B7720)
#define RPG_GAMECORE_MONSTERROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D8B26A0)
#define RPG_GAMECORE_MONSTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8B3430)
#define RPG_GAMECORE_MONSTERROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D8B7650)
#define RPG_GAMECORE_MONSTERROW_GETMONSTERRANK_OFFSET UNITYSDK_OFFSET(0x1D8B47D0)
#define RPG_GAMECORE_MONSTERROW_GET_AETHERDIVIDETYPE_OFFSET UNITYSDK_OFFSET(0x1D8B7730)
#define RPG_GAMECORE_MONSTERROW_GET_MONSTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1D8B77E0)
#define RPG_GAMECORE_MONSTERROW_GET__EXPANDEDDATAROW_OFFSET UNITYSDK_OFFSET(0x1D8B7790)
#define RPG_GAMECORE_MONSTERROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D8B76B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterRow_TypeDefinitionIndex = 14179;

	class MonsterRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SummonIDList; // 0x10
		::Il2CppArray<::AOKFCBEPNNA*>* CustomValues; // 0x18
		::Il2CppArray<::DKNHMEHFNDB*>* OverrideAISkillSequence; // 0x20
		::Il2CppArray<::System::String*>* CustomValueTags; // 0x28
		::Il2CppArray<::JDOFOPKMEFJ*>* DynamicValues; // 0x30
		::RPG::GameCore::AetherDivideMonsterRow* _ExpandedDataRowCache; // 0x38
		::Il2CppArray<::System::String*>* AbilityNameList; // 0x40
		::Il2CppArray<::System::UInt32>* SkillList; // 0x48
		::Il2CppArray<::RPG::GameCore::MonsterResistEntry*>* DebuffResist; // 0x50
		::Il2CppArray<::PNIHHKFGKPN*>* OverrideSkillParams; // 0x58
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* StanceWeakList; // 0x60
		::Il2CppArray<::RPG::Client::TextID>* MonsterStrategy; // 0x68
		::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* DamageTypeResistance; // 0x70
		::System::String* OverrideAIPath; // 0x78
		::RPG::Client::TextID MonsterName; // 0x80
		::RPG::Client::TextID MonsterBattleIntroduction; // 0x90
		::RPG::GameCore::FixPoint HPModifyValue; // 0xA0
		::RPG::GameCore::FixPoint AttackModifyValue; // 0xA8
		::RPG::GameCore::FixPoint SpeedModifyRatio; // 0xB0
		::RPG::GameCore::FixPoint HPModifyRatio; // 0xB8
		::System::Boolean _IsCached; // 0xC0
		::System::Byte _padding0[0x3];
		::System::UInt32 Level; // 0xC4
		::System::UInt32 EliteGroup; // 0xC8
		::System::UInt32 HardLevelGroup; // 0xCC
		::RPG::Client::TextID MonsterIntroduction; // 0xD0
		::RPG::GameCore::FixPoint SpeedModifyValue; // 0xE0
		::RPG::GameCore::FixPoint StanceModifyRatio; // 0xE8
		::RPG::GameCore::FixPoint DefenceModifyValue; // 0xF0
		::RPG::GameCore::FixPoint AttackModifyRatio; // 0xF8
		::System::Int32 StanceCountDelta; // 0x100
		::System::UInt32 MonsterID; // 0x104
		::System::UInt32 MonsterTemplateID; // 0x108
		::System::UInt32 MonsterType; // 0x10C
		::RPG::GameCore::FixPoint StanceModifyValue; // 0x110
		::RPG::GameCore::FixPoint DefenceModifyRatio; // 0x118
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROW_CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROW_FROMBINARY_OFFSET))(a1, a2);
		}

		::RPG::GameCore::AetherSpiritType get_AetherDivideType()
		{
			return ((::RPG::GameCore::AetherSpiritType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROW_GET_AETHERDIVIDETYPE_OFFSET))(this);
		}

		::System::UInt32 get_MonsterUniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROW_GET_MONSTERUNIQUEID_OFFSET))(this);
		}

		::RPG::GameCore::AetherDivideMonsterRow* get__ExpandedDataRow()
		{
			return ((::RPG::GameCore::AetherDivideMonsterRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROW_GET__EXPANDEDDATAROW_OFFSET))(this);
		}

		::RPG::GameCore::MonsterRank GetMonsterRank()
		{
			return ((::RPG::GameCore::MonsterRank(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROW_GETMONSTERRANK_OFFSET))(this);
		}

	};
}
