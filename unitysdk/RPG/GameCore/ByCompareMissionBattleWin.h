#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareMissionBattleWin; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREMISSIONBATTLEWIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4BD520)
#define RPG_GAMECORE_BYCOMPAREMISSIONBATTLEWIN_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4BD6D0)
#define RPG_GAMECORE_BYCOMPAREMISSIONBATTLEWIN_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4BD6A0)
#define RPG_GAMECORE_BYCOMPAREMISSIONBATTLEWIN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4BD530)
#define RPG_GAMECORE_BYCOMPAREMISSIONBATTLEWIN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4BD4F0)

namespace RPG::GameCore
{
	class ByCompareMissionBattleWin : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 EventID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMISSIONBATTLEWIN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareMissionBattleWin* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareMissionBattleWin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMISSIONBATTLEWIN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareMissionBattleWin* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareMissionBattleWin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMISSIONBATTLEWIN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMissionBattleWin* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMissionBattleWin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMISSIONBATTLEWIN_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMissionBattleWin* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMissionBattleWin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMISSIONBATTLEWIN_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
