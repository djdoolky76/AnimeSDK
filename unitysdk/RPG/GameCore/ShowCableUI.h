#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowCableUI; }

#define RPG_GAMECORE_SHOWCABLEUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAC3C0)
#define RPG_GAMECORE_SHOWCABLEUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAAC3D0)
#define RPG_GAMECORE_SHOWCABLEUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAAC390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowCableUI_TypeDefinitionIndex = 20898;

	class ShowCableUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Visible; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWCABLEUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowCableUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowCableUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWCABLEUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowCableUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowCableUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWCABLEUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
