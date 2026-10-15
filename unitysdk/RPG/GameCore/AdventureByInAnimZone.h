#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimZoneType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureByInAnimZone; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYINANIMZONE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B9810)
#define RPG_GAMECORE_ADVENTUREBYINANIMZONE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D3B9A20)
#define RPG_GAMECORE_ADVENTUREBYINANIMZONE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D3B99F0)
#define RPG_GAMECORE_ADVENTUREBYINANIMZONE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3B9820)
#define RPG_GAMECORE_ADVENTUREBYINANIMZONE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3B97E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByInAnimZone_TypeDefinitionIndex = 20007;

	class AdventureByInAnimZone : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AnimZoneType TargetAnimZone; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYINANIMZONE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureByInAnimZone* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureByInAnimZone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYINANIMZONE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureByInAnimZone* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureByInAnimZone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYINANIMZONE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByInAnimZone* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByInAnimZone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYINANIMZONE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByInAnimZone* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByInAnimZone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYINANIMZONE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
