#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureIsTriggerBattleByNpcMonster; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREISTRIGGERBATTLEBYNPCMONSTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C8630)
#define RPG_GAMECORE_ADVENTUREISTRIGGERBATTLEBYNPCMONSTER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D3C87B0)
#define RPG_GAMECORE_ADVENTUREISTRIGGERBATTLEBYNPCMONSTER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D3C8780)
#define RPG_GAMECORE_ADVENTUREISTRIGGERBATTLEBYNPCMONSTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3C8640)
#define RPG_GAMECORE_ADVENTUREISTRIGGERBATTLEBYNPCMONSTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3C8600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureIsTriggerBattleByNpcMonster_TypeDefinitionIndex = 21665;

	class AdventureIsTriggerBattleByNpcMonster : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREISTRIGGERBATTLEBYNPCMONSTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREISTRIGGERBATTLEBYNPCMONSTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREISTRIGGERBATTLEBYNPCMONSTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREISTRIGGERBATTLEBYNPCMONSTER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureIsTriggerBattleByNpcMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREISTRIGGERBATTLEBYNPCMONSTER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
