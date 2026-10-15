#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleInitPosition.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingSoldierRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGSOLDIERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D566C80)
#define RPG_GAMECORE_CHENLINGSOLDIERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D566700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingSoldierRow_TypeDefinitionIndex = 11053;

	class ChenLingSoldierRow : public ::System::Object
	{
	public:
		::System::String* SmallIconPath; // 0x10
		::Il2CppArray<::System::UInt32>* SkillIDList; // 0x18
		::System::String* ModelPath; // 0x20
		::Il2CppArray<::System::UInt32>* AtkSkillIDList; // 0x28
		::Il2CppArray<::System::UInt32>* PromotionConditionList; // 0x30
		::System::String* SmallIconOutlinePath; // 0x38
		::System::Boolean IsOnlyForEnemy; // 0x40
		::System::Byte _padding0[0x3];
		::System::UInt32 InitialMaxLevel; // 0x44
		::System::UInt32 ID; // 0x48
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID SkillDesc; // 0x50
		::RPG::Client::TextID Name; // 0x60
		::RPG::GameCore::ChenLingBattleInitPosition Position; // 0x70
		::System::UInt32 PromotionEffectID; // 0x74
		::RPG::Client::TextID PromotionSkillDesc; // 0x78
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
