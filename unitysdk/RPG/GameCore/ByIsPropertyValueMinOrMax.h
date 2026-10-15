#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AbilityPropertyRatio.h"
#include "unitysdk/RPG/GameCore/MinMaxType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsPropertyValueMinOrMax; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISPROPERTYVALUEMINORMAX_CTOR_OFFSET UNITYSDK_OFFSET(0x1D51EA90)
#define RPG_GAMECORE_BYISPROPERTYVALUEMINORMAX_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D51EE00)
#define RPG_GAMECORE_BYISPROPERTYVALUEMINORMAX_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D51EDA0)
#define RPG_GAMECORE_BYISPROPERTYVALUEMINORMAX_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D51EAD0)
#define RPG_GAMECORE_BYISPROPERTYVALUEMINORMAX_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D51EA30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsPropertyValueMinOrMax_TypeDefinitionIndex = 22558;

	class ByIsPropertyValueMinOrMax : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::TargetEvaluator* CompareTargetType; // 0x28
		::RPG::GameCore::MinMaxType MinOrMax; // 0x30
		::RPG::GameCore::AbilityProperty PropertyType; // 0x34
		::RPG::GameCore::AbilityPropertyRatio PropertyRatioType; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROPERTYVALUEMINORMAX_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsPropertyValueMinOrMax* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsPropertyValueMinOrMax*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROPERTYVALUEMINORMAX_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsPropertyValueMinOrMax* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsPropertyValueMinOrMax*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROPERTYVALUEMINORMAX_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsPropertyValueMinOrMax* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsPropertyValueMinOrMax*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROPERTYVALUEMINORMAX_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsPropertyValueMinOrMax* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsPropertyValueMinOrMax*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROPERTYVALUEMINORMAX_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
