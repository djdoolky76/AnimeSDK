#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsInModifierCallback; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYISINMODIFIERCALLBACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4EBE50)
#define RPG_GAMECORE_BYISINMODIFIERCALLBACK_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4EC250)
#define RPG_GAMECORE_BYISINMODIFIERCALLBACK_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4EC1F0)
#define RPG_GAMECORE_BYISINMODIFIERCALLBACK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4EBE90)
#define RPG_GAMECORE_BYISINMODIFIERCALLBACK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4EBDF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsInModifierCallback_TypeDefinitionIndex = 23500;

	class ByIsInModifierCallback : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* ModifierName; // 0x20
		::RPG::GameCore::TargetEvaluator* ModifierOwner; // 0x28
		::RPG::GameCore::TargetEvaluator* ModifierCaster; // 0x30
		::Il2CppArray<::RPG::GameCore::TurnBasedModifierEvent>* EventTypes; // 0x38
		::Il2CppArray<::RPG::GameCore::AbilityProperty>* PropertyTypes; // 0x40
		::Il2CppArray<::System::String*>* DynamicValues; // 0x48
		::System::Boolean IgnoreCurCallback; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINMODIFIERCALLBACK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsInModifierCallback* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsInModifierCallback*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINMODIFIERCALLBACK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsInModifierCallback* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsInModifierCallback*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINMODIFIERCALLBACK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInModifierCallback* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInModifierCallback*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINMODIFIERCALLBACK_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInModifierCallback* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInModifierCallback*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINMODIFIERCALLBACK_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
