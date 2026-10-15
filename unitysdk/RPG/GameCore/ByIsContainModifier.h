#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsContainModifier; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISCONTAINMODIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D50C7E0)
#define RPG_GAMECORE_BYISCONTAINMODIFIER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D50CAC0)
#define RPG_GAMECORE_BYISCONTAINMODIFIER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D50CA90)
#define RPG_GAMECORE_BYISCONTAINMODIFIER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D50C7F0)
#define RPG_GAMECORE_BYISCONTAINMODIFIER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D50C7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsContainModifier_TypeDefinitionIndex = 22983;

	class ByIsContainModifier : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicString* ModifierName; // 0x28
		::RPG::GameCore::TargetEvaluator* CasterFilter; // 0x30
		::System::Boolean AddedOrAlive; // 0x38
		::System::Boolean IncludeRecordBeforeDeathrattle; // 0x39
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTAINMODIFIER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsContainModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsContainModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTAINMODIFIER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsContainModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsContainModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTAINMODIFIER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsContainModifier* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsContainModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTAINMODIFIER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsContainModifier* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsContainModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTAINMODIFIER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
