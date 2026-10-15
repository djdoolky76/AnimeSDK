#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowMenu; }

#define RPG_GAMECORE_SHOWMENU_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB40E0)
#define RPG_GAMECORE_SHOWMENU_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB40F0)
#define RPG_GAMECORE_SHOWMENU_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB40B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowMenu_TypeDefinitionIndex = 21131;

	class ShowMenu : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean DisplaySingleMenuItem; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMENU_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowMenu* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowMenu*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMENU_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowMenu* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowMenu*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMENU_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
