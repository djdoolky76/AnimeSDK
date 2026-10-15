#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsControlSkillDisable; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISCONTROLSKILLDISABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4DF920)
#define RPG_GAMECORE_BYISCONTROLSKILLDISABLE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4DFB90)
#define RPG_GAMECORE_BYISCONTROLSKILLDISABLE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4DFB30)
#define RPG_GAMECORE_BYISCONTROLSKILLDISABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4DF960)
#define RPG_GAMECORE_BYISCONTROLSKILLDISABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4DF8C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsControlSkillDisable_TypeDefinitionIndex = 23017;

	class ByIsControlSkillDisable : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::ControlSkillType ControlSkillType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTROLSKILLDISABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsControlSkillDisable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsControlSkillDisable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTROLSKILLDISABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsControlSkillDisable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsControlSkillDisable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTROLSKILLDISABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsControlSkillDisable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsControlSkillDisable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTROLSKILLDISABLE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsControlSkillDisable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsControlSkillDisable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTROLSKILLDISABLE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
