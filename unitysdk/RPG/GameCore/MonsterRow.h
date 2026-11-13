#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AetherSpiritType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
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

#define RPG_GAMECORE_MONSTERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E47AB20)
#define RPG_GAMECORE_MONSTERROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1E475AA0)
#define RPG_GAMECORE_MONSTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E476830)
#define RPG_GAMECORE_MONSTERROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1E47AA50)
#define RPG_GAMECORE_MONSTERROW_GETMONSTERRANK_OFFSET UNITYSDK_OFFSET(0x1E477BD0)
#define RPG_GAMECORE_MONSTERROW_GET_AETHERDIVIDETYPE_OFFSET UNITYSDK_OFFSET(0x1E47AB30)
#define RPG_GAMECORE_MONSTERROW_GET_MONSTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1E47ABE0)
#define RPG_GAMECORE_MONSTERROW_GET__EXPANDEDDATAROW_OFFSET UNITYSDK_OFFSET(0x1E47AB90)
#define RPG_GAMECORE_MONSTERROW_RESET_OFFSET UNITYSDK_OFFSET(0x1E47AAB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterRow_TypeDefinitionIndex = 14336;

	class MonsterRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* DamageTypeResistance; // 0x10
		::Il2CppArray<::RPG::GameCore::MonsterResistEntry*>* DebuffResist; // 0x18
		::System::String* OverrideAIPath; // 0x20
		::Il2CppArray<::System::UInt32>* SummonIDList; // 0x28
		::Il2CppArray<::System::String*>* CustomValueTags; // 0x30
		::Il2CppArray<::System::String*>* AbilityNameList; // 0x38
		::Il2CppArray<::JDOFOPKMEFJ*>* DynamicValues; // 0x40
		::Il2CppArray<::System::UInt32>* SkillList; // 0x48
		::RPG::GameCore::AetherDivideMonsterRow* _ExpandedDataRowCache; // 0x50
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* StanceWeakList; // 0x58
		::Il2CppArray<::AOKFCBEPNNA*>* CustomValues; // 0x60
		::Il2CppArray<::DKNHMEHFNDB*>* OverrideAISkillSequence; // 0x68
		::Il2CppArray<::RPG::Client::TextID>* MonsterStrategy; // 0x70
		::Il2CppArray<::PNIHHKFGKPN*>* OverrideSkillParams; // 0x78
		::System::Boolean _IsCached; // 0x80
		::System::Byte _padding0[0x3];
		::System::UInt32 MonsterID; // 0x84
		::RPG::GameCore::FixPoint DefenceModifyRatio; // 0x88
		::RPG::GameCore::FixPoint SpeedModifyValue; // 0x90
		::RPG::Client::TextID MonsterBattleIntroduction; // 0x98
		::RPG::Client::TextID MonsterIntroduction; // 0xA8
		::RPG::GameCore::FixPoint AttackModifyRatio; // 0xB8
		::RPG::GameCore::FixPoint HPModifyRatio; // 0xC0
		::RPG::GameCore::FixPoint StanceModifyValue; // 0xC8
		::System::UInt32 Level; // 0xD0
		::System::Int32 StanceCountDelta; // 0xD4
		::RPG::GameCore::FixPoint StanceModifyRatio; // 0xD8
		::System::UInt32 MonsterType; // 0xE0
		::System::UInt32 MonsterTemplateID; // 0xE4
		::RPG::GameCore::FixPoint DefenceModifyValue; // 0xE8
		::RPG::GameCore::FixPoint AttackModifyValue; // 0xF0
		::RPG::GameCore::FixPoint SpeedModifyRatio; // 0xF8
		::RPG::GameCore::FixPoint HPModifyValue; // 0x100
		::RPG::Client::TextID MonsterName; // 0x108
		::System::UInt32 EliteGroup; // 0x118
		::System::UInt32 HardLevelGroup; // 0x11C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROW_CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROW_FROMTABLEOFFSET_OFFSET))(this, a1);
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
