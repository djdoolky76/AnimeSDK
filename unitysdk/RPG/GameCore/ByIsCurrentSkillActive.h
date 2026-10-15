#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsCurrentSkillActive; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISCURRENTSKILLACTIVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D50E490)
#define RPG_GAMECORE_BYISCURRENTSKILLACTIVE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D50E650)
#define RPG_GAMECORE_BYISCURRENTSKILLACTIVE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D50E620)
#define RPG_GAMECORE_BYISCURRENTSKILLACTIVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D50E4A0)
#define RPG_GAMECORE_BYISCURRENTSKILLACTIVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D50E460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsCurrentSkillActive_TypeDefinitionIndex = 23531;

	class ByIsCurrentSkillActive : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCURRENTSKILLACTIVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsCurrentSkillActive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsCurrentSkillActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCURRENTSKILLACTIVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsCurrentSkillActive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsCurrentSkillActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCURRENTSKILLACTIVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCurrentSkillActive* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCurrentSkillActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCURRENTSKILLACTIVE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCurrentSkillActive* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCurrentSkillActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCURRENTSKILLACTIVE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
