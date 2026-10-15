#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByHasSkillTag; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASSKILLTAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4FAAA0)
#define RPG_GAMECORE_BYHASSKILLTAG_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4FAD20)
#define RPG_GAMECORE_BYHASSKILLTAG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4FACC0)
#define RPG_GAMECORE_BYHASSKILLTAG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4FAAE0)
#define RPG_GAMECORE_BYHASSKILLTAG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4FAA40)

namespace RPG::GameCore
{
	class ByHasSkillTag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::JsonEnum* Tag; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSKILLTAG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHasSkillTag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHasSkillTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSKILLTAG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHasSkillTag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHasSkillTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSKILLTAG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSkillTag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSkillTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSKILLTAG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSkillTag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSkillTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSKILLTAG_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
