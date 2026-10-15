#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareValue; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B65E0)
#define RPG_GAMECORE_BYCOMPAREVALUE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4B6850)
#define RPG_GAMECORE_BYCOMPAREVALUE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4B6810)
#define RPG_GAMECORE_BYCOMPAREVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4B65F0)
#define RPG_GAMECORE_BYCOMPAREVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4B65A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareValue_TypeDefinitionIndex = 23802;

	class ByCompareValue : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* Value1; // 0x20
		::RPG::GameCore::ValueEvaluatorConfig* Value2; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x30
		::System::Boolean ExactlyEqual; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREVALUE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREVALUE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
