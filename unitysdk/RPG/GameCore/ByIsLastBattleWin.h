#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsLastBattleWin; }

#define RPG_GAMECORE_BYISLASTBATTLEWIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D51C1D0)
#define RPG_GAMECORE_BYISLASTBATTLEWIN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D51C1E0)
#define RPG_GAMECORE_BYISLASTBATTLEWIN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D51C1A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsLastBattleWin_TypeDefinitionIndex = 20793;

	class ByIsLastBattleWin : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISLASTBATTLEWIN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsLastBattleWin* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsLastBattleWin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISLASTBATTLEWIN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsLastBattleWin* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsLastBattleWin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISLASTBATTLEWIN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
