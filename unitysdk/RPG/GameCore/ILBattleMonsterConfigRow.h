#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ILBattleMonsterRank.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class JDOFOPKMEFJ;
namespace RPG::GameCore { class ILBattleMonsterConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_ILBATTLEMONSTERCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE81800)
#define RPG_GAMECORE_ILBATTLEMONSTERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE80F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ILBattleMonsterConfigRow_TypeDefinitionIndex = 13950;

	class ILBattleMonsterConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* AbilityNameList; // 0x10
		::System::String* IconPath; // 0x18
		::Il2CppArray<::System::UInt32>* SkillList; // 0x20
		::System::String* AIPath; // 0x28
		::System::String* JsonConfig; // 0x30
		::System::String* RoundIconPath; // 0x38
		::System::String* PrefabPath; // 0x40
		::Il2CppArray<::System::String*>* CustomValueTags; // 0x48
		::Il2CppArray<::JDOFOPKMEFJ*>* DynamicValues; // 0x50
		::Il2CppArray<::System::UInt32>* SummonIDList; // 0x58
		::RPG::GameCore::FixPoint MoveSpeed; // 0x60
		::RPG::GameCore::FixPoint HPBase; // 0x68
		::RPG::GameCore::FixPoint CriticalDamageBase; // 0x70
		::RPG::GameCore::FixPoint DefenceBase; // 0x78
		::RPG::GameCore::FixPoint AttackBase; // 0x80
		::System::UInt32 OriginalTemplateID; // 0x88
		::System::UInt32 ID; // 0x8C
		::RPG::GameCore::ILBattleMonsterRank Rank; // 0x90
		::System::Boolean ShowSpecialHpBar; // 0x94
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FixPoint CriticalChanceBase; // 0x98
		::RPG::Client::TextID MonsterName; // 0xA0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLEMONSTERCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ILBattleMonsterConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ILBattleMonsterConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLEMONSTERCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
