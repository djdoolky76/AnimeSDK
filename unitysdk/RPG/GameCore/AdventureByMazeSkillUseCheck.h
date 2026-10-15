#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureByMazeSkillUseCheck; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYMAZESKILLUSECHECK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BF6E0)
#define RPG_GAMECORE_ADVENTUREBYMAZESKILLUSECHECK_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D3BF8A0)
#define RPG_GAMECORE_ADVENTUREBYMAZESKILLUSECHECK_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D3BF870)
#define RPG_GAMECORE_ADVENTUREBYMAZESKILLUSECHECK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3BF6F0)
#define RPG_GAMECORE_ADVENTUREBYMAZESKILLUSECHECK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3BF6B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByMazeSkillUseCheck_TypeDefinitionIndex = 20038;

	class AdventureByMazeSkillUseCheck : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMAZESKILLUSECHECK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureByMazeSkillUseCheck* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureByMazeSkillUseCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMAZESKILLUSECHECK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureByMazeSkillUseCheck* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureByMazeSkillUseCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMAZESKILLUSECHECK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByMazeSkillUseCheck* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByMazeSkillUseCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMAZESKILLUSECHECK_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByMazeSkillUseCheck* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByMazeSkillUseCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMAZESKILLUSECHECK_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
