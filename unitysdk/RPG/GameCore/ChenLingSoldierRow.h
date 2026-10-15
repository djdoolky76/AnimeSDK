#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleInitPosition.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingSoldierRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGSOLDIERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5946D0)
#define RPG_GAMECORE_CHENLINGSOLDIERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D594150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingSoldierRow_TypeDefinitionIndex = 11053;

	class ChenLingSoldierRow : public ::System::Object
	{
	public:
		::System::String* SmallIconOutlinePath; // 0x10
		::System::String* ModelPath; // 0x18
		::Il2CppArray<::System::UInt32>* AtkSkillIDList; // 0x20
		::Il2CppArray<::System::UInt32>* SkillIDList; // 0x28
		::Il2CppArray<::System::UInt32>* PromotionConditionList; // 0x30
		::System::String* SmallIconPath; // 0x38
		::RPG::Client::TextID SkillDesc; // 0x40
		::System::UInt32 ID; // 0x50
		::System::UInt32 InitialMaxLevel; // 0x54
		::RPG::Client::TextID PromotionSkillDesc; // 0x58
		::RPG::GameCore::ChenLingBattleInitPosition Position; // 0x68
		::System::UInt32 PromotionEffectID; // 0x6C
		::System::Boolean IsOnlyForEnemy; // 0x70
		::System::Byte _padding0[0x7];
		::RPG::Client::TextID Name; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGSOLDIERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingSoldierRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingSoldierRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGSOLDIERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
