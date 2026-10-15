#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class UniversalHotFixBasePredicate; }
namespace RPG::GameCore { class UniversalHotFixTaskConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_UNIVERSALHOTFIXBASEPREDICATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC740B0)
#define RPG_GAMECORE_UNIVERSALHOTFIXBASEPREDICATE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC75000)
#define RPG_GAMECORE_UNIVERSALHOTFIXBASEPREDICATE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC74C90)
#define RPG_GAMECORE_UNIVERSALHOTFIXBASEPREDICATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC740C0)
#define RPG_GAMECORE_UNIVERSALHOTFIXBASEPREDICATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC73E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UniversalHotFixBasePredicate_TypeDefinitionIndex = 23357;

	class UniversalHotFixBasePredicate : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::UniversalHotFixTaskConfig* ParamConfig; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXBASEPREDICATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UniversalHotFixBasePredicate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UniversalHotFixBasePredicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXBASEPREDICATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::UniversalHotFixBasePredicate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UniversalHotFixBasePredicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXBASEPREDICATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixBasePredicate* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixBasePredicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXBASEPREDICATE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixBasePredicate* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixBasePredicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXBASEPREDICATE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
