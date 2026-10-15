#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureSkillConfig; }
namespace RPG::GameCore { class SkillAbilityConfig; }
namespace RPG::GameCore { class SummonUnitSkillConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SUMMONUNITSKILLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB3EA10)
#define RPG_GAMECORE_SUMMONUNITSKILLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB3CDC0)
#define RPG_GAMECORE_SUMMONUNITSKILLCONFIG_RPG_GAMECORE_IADVENTURECHARACTERSKILLCONFIG_GET_ABILITYLIST_OFFSET UNITYSDK_OFFSET(0x1DB3EA50)
#define RPG_GAMECORE_SUMMONUNITSKILLCONFIG_RPG_GAMECORE_IADVENTURECHARACTERSKILLCONFIG_GET_SKILLABILITYLIST_OFFSET UNITYSDK_OFFSET(0x1DB3EA40)
#define RPG_GAMECORE_SUMMONUNITSKILLCONFIG_RPG_GAMECORE_IADVENTURECHARACTERSKILLCONFIG_GET_SKILLLIST_OFFSET UNITYSDK_OFFSET(0x1DB3EA30)
#define RPG_GAMECORE_SUMMONUNITSKILLCONFIG_RPG_GAMECORE_IADVENTURECHARACTERSKILLCONFIG_GET_USETYPEAHEADSKILLINPUT_OFFSET UNITYSDK_OFFSET(0x1DB3EA20)

namespace RPG::GameCore
{
	class SummonUnitSkillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AdventureSkillConfig*>* SkillList; // 0x10
		::Il2CppArray<::RPG::GameCore::SkillAbilityConfig*>* SkillAbilityList; // 0x18
		::Il2CppArray<::System::String*>* AbilityList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITSKILLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SummonUnitSkillConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SummonUnitSkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITSKILLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		::System::Boolean RPG_GameCore_IAdventureCharacterSkillConfig_get_UseTypeAheadSkillInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITSKILLCONFIG_RPG_GAMECORE_IADVENTURECHARACTERSKILLCONFIG_GET_USETYPEAHEADSKILLINPUT_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AdventureSkillConfig*>* RPG_GameCore_IAdventureCharacterSkillConfig_get_SkillList()
		{
			return ((::Il2CppArray<::RPG::GameCore::AdventureSkillConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITSKILLCONFIG_RPG_GAMECORE_IADVENTURECHARACTERSKILLCONFIG_GET_SKILLLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::SkillAbilityConfig*>* RPG_GameCore_IAdventureCharacterSkillConfig_get_SkillAbilityList()
		{
			return ((::Il2CppArray<::RPG::GameCore::SkillAbilityConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITSKILLCONFIG_RPG_GAMECORE_IADVENTURECHARACTERSKILLCONFIG_GET_SKILLABILITYLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* RPG_GameCore_IAdventureCharacterSkillConfig_get_AbilityList()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITSKILLCONFIG_RPG_GAMECORE_IADVENTURECHARACTERSKILLCONFIG_GET_ABILITYLIST_OFFSET))(this);
		}

	};
}
