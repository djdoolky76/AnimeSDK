#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleQTEUIConfig; }
namespace RPG::GameCore { class ShowBattleQTEUI; }

#define RPG_GAMECORE_SHOWBATTLEQTEUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3E3B10)
#define RPG_GAMECORE_SHOWBATTLEQTEUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F3E3B20)
#define RPG_GAMECORE_SHOWBATTLEQTEUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F3E3AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBattleQTEUI_TypeDefinitionIndex = 23788;

	class ShowBattleQTEUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::BattleQTEUIConfig* UIConfig; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEQTEUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowBattleQTEUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowBattleQTEUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEQTEUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowBattleQTEUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowBattleQTEUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEQTEUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
