#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleTalkBGType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowBattleTalkBGUI; }

#define RPG_GAMECORE_SHOWBATTLETALKBGUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD89A0)
#define RPG_GAMECORE_SHOWBATTLETALKBGUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD89B0)
#define RPG_GAMECORE_SHOWBATTLETALKBGUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD8960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBattleTalkBGUI_TypeDefinitionIndex = 23349;

	class ShowBattleTalkBGUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::BattleTalkBGType BGType; // 0x18
		::System::Boolean IsShow; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Single CustomTime; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLETALKBGUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowBattleTalkBGUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowBattleTalkBGUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLETALKBGUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowBattleTalkBGUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowBattleTalkBGUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLETALKBGUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
