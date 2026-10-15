#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareAbilityProperty; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREABILITYPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D499450)
#define RPG_GAMECORE_BYCOMPAREABILITYPROPERTY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D499700)
#define RPG_GAMECORE_BYCOMPAREABILITYPROPERTY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4996D0)
#define RPG_GAMECORE_BYCOMPAREABILITYPROPERTY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D499460)
#define RPG_GAMECORE_BYCOMPAREABILITYPROPERTY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D499420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareAbilityProperty_TypeDefinitionIndex = 23546;

	class ByCompareAbilityProperty : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AbilityProperty Property; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x2C
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREABILITYPROPERTY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareAbilityProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareAbilityProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREABILITYPROPERTY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareAbilityProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareAbilityProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREABILITYPROPERTY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAbilityProperty* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAbilityProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREABILITYPROPERTY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAbilityProperty* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAbilityProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREABILITYPROPERTY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
