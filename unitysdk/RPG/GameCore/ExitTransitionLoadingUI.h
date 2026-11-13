#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExitTransitionLoadingUI; }

#define RPG_GAMECORE_EXITTRANSITIONLOADINGUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC83D20)
#define RPG_GAMECORE_EXITTRANSITIONLOADINGUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1FC83D30)
#define RPG_GAMECORE_EXITTRANSITIONLOADINGUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1FC83C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExitTransitionLoadingUI_TypeDefinitionIndex = 22099;

	class ExitTransitionLoadingUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXITTRANSITIONLOADINGUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExitTransitionLoadingUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExitTransitionLoadingUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXITTRANSITIONLOADINGUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExitTransitionLoadingUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExitTransitionLoadingUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXITTRANSITIONLOADINGUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
