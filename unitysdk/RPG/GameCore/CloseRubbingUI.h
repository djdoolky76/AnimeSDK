#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CloseRubbingUI; }

#define RPG_GAMECORE_CLOSERUBBINGUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5108B0)
#define RPG_GAMECORE_CLOSERUBBINGUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F5108C0)
#define RPG_GAMECORE_CLOSERUBBINGUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F5107F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CloseRubbingUI_TypeDefinitionIndex = 22578;

	class CloseRubbingUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSERUBBINGUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CloseRubbingUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CloseRubbingUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSERUBBINGUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CloseRubbingUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CloseRubbingUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSERUBBINGUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
