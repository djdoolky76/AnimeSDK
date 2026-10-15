#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class VE_Predicate; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_PREDICATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC814E0)
#define RPG_GAMECORE_VE_PREDICATE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC816F0)
#define RPG_GAMECORE_VE_PREDICATE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC816C0)
#define RPG_GAMECORE_VE_PREDICATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC814F0)
#define RPG_GAMECORE_VE_PREDICATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC814B0)

namespace RPG::GameCore
{
	class VE_Predicate : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::PredicateConfig* Predicate; // 0x20
		::RPG::GameCore::ValueEvaluatorConfig* TrueValue; // 0x28
		::RPG::GameCore::ValueEvaluatorConfig* FalseValue; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_PREDICATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_Predicate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_Predicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_PREDICATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_Predicate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_Predicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_PREDICATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Predicate* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Predicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_PREDICATE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Predicate* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Predicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_PREDICATE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
