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

#define RPG_GAMECORE_ILBATTLEMONSTERCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E989B70)
#define RPG_GAMECORE_ILBATTLEMONSTERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E9892D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ILBattleMonsterConfigRow_TypeDefinitionIndex = 13950;

	class ILBattleMonsterConfigRow : public ::System::Object
	{
	public:
		::System::String* RoundIconPath; // 0x10
		::System::String* PrefabPath; // 0x18
		::Il2CppArray<::System::UInt32>* SummonIDList; // 0x20
		::Il2CppArray<::JDOFOPKMEFJ*>* DynamicValues; // 0x28
		::Il2CppArray<::System::String*>* AbilityNameList; // 0x30
		::Il2CppArray<::System::String*>* CustomValueTags; // 0x38
		::System::String* IconPath; // 0x40
		::System::String* AIPath; // 0x48
		::Il2CppArray<::System::UInt32>* SkillList; // 0x50
		::System::String* JsonConfig; // 0x58
		::RPG::GameCore::FixPoint DefenceBase; // 0x60
		::System::UInt32 ID; // 0x68
		::System::UInt32 OriginalTemplateID; // 0x6C
		::RPG::GameCore::FixPoint CriticalDamageBase; // 0x70
		::RPG::GameCore::FixPoint HPBase; // 0x78
		::RPG::GameCore::ILBattleMonsterRank Rank; // 0x80
		::System::Boolean ShowSpecialHpBar; // 0x84
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FixPoint CriticalChanceBase; // 0x88
		::RPG::GameCore::FixPoint MoveSpeed; // 0x90
		::RPG::GameCore::FixPoint AttackBase; // 0x98
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
