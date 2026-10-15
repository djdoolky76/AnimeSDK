#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCurrentSkillEffect; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCURRENTSKILLEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4EADD0)
#define RPG_GAMECORE_BYCURRENTSKILLEFFECT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4EB0C0)
#define RPG_GAMECORE_BYCURRENTSKILLEFFECT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4EB080)
#define RPG_GAMECORE_BYCURRENTSKILLEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4EADE0)
#define RPG_GAMECORE_BYCURRENTSKILLEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4EAD90)

namespace RPG::GameCore
{
	class ByCurrentSkillEffect : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::SkillEffect SkillEffect; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::SkillEffect>* SkillEffectList; // 0x28
		::System::Boolean IncludeInsertAbility; // 0x30
		::System::Boolean AccessClientActiveSkill; // 0x31
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCurrentSkillEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCurrentSkillEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCurrentSkillEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCurrentSkillEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentSkillEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentSkillEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLEFFECT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentSkillEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentSkillEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLEFFECT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
