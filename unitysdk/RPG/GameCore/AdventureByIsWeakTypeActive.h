#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureByIsWeakTypeActive; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYISWEAKTYPEACTIVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D391530)
#define RPG_GAMECORE_ADVENTUREBYISWEAKTYPEACTIVE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D391730)
#define RPG_GAMECORE_ADVENTUREBYISWEAKTYPEACTIVE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D391700)
#define RPG_GAMECORE_ADVENTUREBYISWEAKTYPEACTIVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D391540)
#define RPG_GAMECORE_ADVENTUREBYISWEAKTYPEACTIVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D391500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByIsWeakTypeActive_TypeDefinitionIndex = 20789;

	class AdventureByIsWeakTypeActive : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* CasterType; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISWEAKTYPEACTIVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureByIsWeakTypeActive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureByIsWeakTypeActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISWEAKTYPEACTIVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureByIsWeakTypeActive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureByIsWeakTypeActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISWEAKTYPEACTIVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsWeakTypeActive* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsWeakTypeActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISWEAKTYPEACTIVE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsWeakTypeActive* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsWeakTypeActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISWEAKTYPEACTIVE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
