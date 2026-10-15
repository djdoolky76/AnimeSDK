#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsTargetAbleToAction; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISTARGETABLETOACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5244C0)
#define RPG_GAMECORE_BYISTARGETABLETOACTION_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D524680)
#define RPG_GAMECORE_BYISTARGETABLETOACTION_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D524650)
#define RPG_GAMECORE_BYISTARGETABLETOACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5244D0)
#define RPG_GAMECORE_BYISTARGETABLETOACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D524490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTargetAbleToAction_TypeDefinitionIndex = 23036;

	class ByIsTargetAbleToAction : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETABLETOACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsTargetAbleToAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsTargetAbleToAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETABLETOACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsTargetAbleToAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsTargetAbleToAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETABLETOACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetAbleToAction* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetAbleToAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETABLETOACTION_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetAbleToAction* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetAbleToAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETABLETOACTION_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
