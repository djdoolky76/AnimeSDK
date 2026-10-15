#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAbilityProperty.h"
#include "unitysdk/RPG/GameCore/AdventureAbilityPropertyRatio.h"
#include "unitysdk/RPG/GameCore/MinMaxType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureByIsPropertyValueMinOrMax; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYISPROPERTYVALUEMINORMAX_CTOR_OFFSET UNITYSDK_OFFSET(0x1D390830)
#define RPG_GAMECORE_ADVENTUREBYISPROPERTYVALUEMINORMAX_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D390C00)
#define RPG_GAMECORE_ADVENTUREBYISPROPERTYVALUEMINORMAX_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D390BA0)
#define RPG_GAMECORE_ADVENTUREBYISPROPERTYVALUEMINORMAX_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D390870)
#define RPG_GAMECORE_ADVENTUREBYISPROPERTYVALUEMINORMAX_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3907D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByIsPropertyValueMinOrMax_TypeDefinitionIndex = 20248;

	class AdventureByIsPropertyValueMinOrMax : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::TargetEvaluator* CompareTargetType; // 0x28
		::System::Boolean AliveOnly; // 0x30
		::System::Byte _padding0[0x3];
		::RPG::GameCore::MinMaxType MinOrMax; // 0x34
		::RPG::GameCore::AdventureAbilityProperty PropertyType; // 0x38
		::RPG::GameCore::AdventureAbilityPropertyRatio PropertyRatioType; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISPROPERTYVALUEMINORMAX_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureByIsPropertyValueMinOrMax* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureByIsPropertyValueMinOrMax*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISPROPERTYVALUEMINORMAX_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureByIsPropertyValueMinOrMax* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureByIsPropertyValueMinOrMax*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISPROPERTYVALUEMINORMAX_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsPropertyValueMinOrMax* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsPropertyValueMinOrMax*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISPROPERTYVALUEMINORMAX_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsPropertyValueMinOrMax* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsPropertyValueMinOrMax*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISPROPERTYVALUEMINORMAX_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
