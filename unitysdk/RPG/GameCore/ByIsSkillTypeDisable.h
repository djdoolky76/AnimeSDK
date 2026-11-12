#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsSkillTypeDisable; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISSKILLTYPEDISABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E732F60)
#define RPG_GAMECORE_BYISSKILLTYPEDISABLE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E7331D0)
#define RPG_GAMECORE_BYISSKILLTYPEDISABLE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E733170)
#define RPG_GAMECORE_BYISSKILLTYPEDISABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E732FA0)
#define RPG_GAMECORE_BYISSKILLTYPEDISABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E732F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsSkillTypeDisable_TypeDefinitionIndex = 24779;

	class ByIsSkillTypeDisable : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::SkillType Type; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSKILLTYPEDISABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsSkillTypeDisable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsSkillTypeDisable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSKILLTYPEDISABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsSkillTypeDisable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsSkillTypeDisable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSKILLTYPEDISABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSkillTypeDisable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSkillTypeDisable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSKILLTYPEDISABLE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSkillTypeDisable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSkillTypeDisable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSKILLTYPEDISABLE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
