#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreePointTriggerKey.h"
#include "unitysdk/RPG/GameCore/BattleExtraPropertyAddition.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleExtraPropertyAdditionPair; }
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEEXTRAPROPERTYADDITIONPAIR_CTOR_OFFSET UNITYSDK_OFFSET(0x1C313E80)
#define RPG_GAMECORE_BATTLEEXTRAPROPERTYADDITIONPAIR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1C313E90)
#define RPG_GAMECORE_BATTLEEXTRAPROPERTYADDITIONPAIR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1C313D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleExtraPropertyAdditionPair_TypeDefinitionIndex = 24090;

	class BattleExtraPropertyAdditionPair : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::BattleExtraPropertyAddition PropertyName; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* Value; // 0x18
		::Il2CppArray<::System::UInt32>* CharacterConfigIDFilter; // 0x20
		::Il2CppArray<::RPG::GameCore::AvatarSkillTreePointTriggerKey>* PointTriggerKeyList; // 0x28
		::Il2CppArray<::System::String*>* SkillTriggerKeyList; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEXTRAPROPERTYADDITIONPAIR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleExtraPropertyAdditionPair* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleExtraPropertyAdditionPair*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEXTRAPROPERTYADDITIONPAIR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleExtraPropertyAdditionPair* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleExtraPropertyAdditionPair*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEXTRAPROPERTYADDITIONPAIR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
