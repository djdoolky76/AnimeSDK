#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureByNpcMazeSkillCooldown; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYNPCMAZESKILLCOOLDOWN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D393780)
#define RPG_GAMECORE_ADVENTUREBYNPCMAZESKILLCOOLDOWN_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D393900)
#define RPG_GAMECORE_ADVENTUREBYNPCMAZESKILLCOOLDOWN_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D3938D0)
#define RPG_GAMECORE_ADVENTUREBYNPCMAZESKILLCOOLDOWN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D393790)
#define RPG_GAMECORE_ADVENTUREBYNPCMAZESKILLCOOLDOWN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D393750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByNpcMazeSkillCooldown_TypeDefinitionIndex = 20008;

	class AdventureByNpcMazeSkillCooldown : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYNPCMAZESKILLCOOLDOWN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureByNpcMazeSkillCooldown* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureByNpcMazeSkillCooldown*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYNPCMAZESKILLCOOLDOWN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureByNpcMazeSkillCooldown* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureByNpcMazeSkillCooldown*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYNPCMAZESKILLCOOLDOWN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByNpcMazeSkillCooldown* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByNpcMazeSkillCooldown*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYNPCMAZESKILLCOOLDOWN_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByNpcMazeSkillCooldown* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByNpcMazeSkillCooldown*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYNPCMAZESKILLCOOLDOWN_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
