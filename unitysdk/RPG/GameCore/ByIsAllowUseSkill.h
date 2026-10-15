#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsAllowUseSkill; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISALLOWUSESKILL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4DA1D0)
#define RPG_GAMECORE_BYISALLOWUSESKILL_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4DA3E0)
#define RPG_GAMECORE_BYISALLOWUSESKILL_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4DA3B0)
#define RPG_GAMECORE_BYISALLOWUSESKILL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4DA1E0)
#define RPG_GAMECORE_BYISALLOWUSESKILL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4DA1A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsAllowUseSkill_TypeDefinitionIndex = 23054;

	class ByIsAllowUseSkill : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::ControlSkillType ControlSkillType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLOWUSESKILL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsAllowUseSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsAllowUseSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLOWUSESKILL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsAllowUseSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsAllowUseSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLOWUSESKILL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAllowUseSkill* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAllowUseSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLOWUSESKILL_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAllowUseSkill* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAllowUseSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLOWUSESKILL_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
