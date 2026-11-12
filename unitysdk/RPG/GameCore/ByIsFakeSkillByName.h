#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsFakeSkillByName; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYISFAKESKILLBYNAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7246C0)
#define RPG_GAMECORE_BYISFAKESKILLBYNAME_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E724920)
#define RPG_GAMECORE_BYISFAKESKILLBYNAME_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E7248C0)
#define RPG_GAMECORE_BYISFAKESKILLBYNAME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E724700)
#define RPG_GAMECORE_BYISFAKESKILLBYNAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E724660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsFakeSkillByName_TypeDefinitionIndex = 23434;

	class ByIsFakeSkillByName : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* TriggerKey; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFAKESKILLBYNAME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsFakeSkillByName* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsFakeSkillByName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFAKESKILLBYNAME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsFakeSkillByName* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsFakeSkillByName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFAKESKILLBYNAME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsFakeSkillByName* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsFakeSkillByName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFAKESKILLBYNAME_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsFakeSkillByName* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsFakeSkillByName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFAKESKILLBYNAME_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
