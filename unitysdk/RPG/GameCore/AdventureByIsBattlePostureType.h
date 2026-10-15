#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattlePostureType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureByIsBattlePostureType; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYISBATTLEPOSTURETYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BA530)
#define RPG_GAMECORE_ADVENTUREBYISBATTLEPOSTURETYPE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D3BA6F0)
#define RPG_GAMECORE_ADVENTUREBYISBATTLEPOSTURETYPE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D3BA6C0)
#define RPG_GAMECORE_ADVENTUREBYISBATTLEPOSTURETYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3BA540)
#define RPG_GAMECORE_ADVENTUREBYISBATTLEPOSTURETYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3BA500)

namespace RPG::GameCore
{
	class AdventureByIsBattlePostureType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::BattlePostureType PostureType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISBATTLEPOSTURETYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureByIsBattlePostureType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureByIsBattlePostureType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISBATTLEPOSTURETYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureByIsBattlePostureType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureByIsBattlePostureType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISBATTLEPOSTURETYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsBattlePostureType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsBattlePostureType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISBATTLEPOSTURETYPE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsBattlePostureType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsBattlePostureType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISBATTLEPOSTURETYPE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
