#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowBattleUI; }

#define RPG_GAMECORE_SHOWBATTLEUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD8BF0)
#define RPG_GAMECORE_SHOWBATTLEUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD8C00)
#define RPG_GAMECORE_SHOWBATTLEUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD8BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBattleUI_TypeDefinitionIndex = 22502;

	class ShowBattleUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single InteractableDelay; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowBattleUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowBattleUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowBattleUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowBattleUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
