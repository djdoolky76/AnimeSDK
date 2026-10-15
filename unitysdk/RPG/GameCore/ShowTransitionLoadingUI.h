#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowTransitionLoadingUI; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWTRANSITIONLOADINGUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE6230)
#define RPG_GAMECORE_SHOWTRANSITIONLOADINGUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE6240)
#define RPG_GAMECORE_SHOWTRANSITIONLOADINGUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE6200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowTransitionLoadingUI_TypeDefinitionIndex = 21709;

	class ShowTransitionLoadingUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Name; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTRANSITIONLOADINGUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowTransitionLoadingUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowTransitionLoadingUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTRANSITIONLOADINGUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowTransitionLoadingUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowTransitionLoadingUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTRANSITIONLOADINGUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
