#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UIMonopolyWaitMainPage; }

#define RPG_GAMECORE_UIMONOPOLYWAITMAINPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC42080)
#define RPG_GAMECORE_UIMONOPOLYWAITMAINPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC42090)
#define RPG_GAMECORE_UIMONOPOLYWAITMAINPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC41FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UIMonopolyWaitMainPage_TypeDefinitionIndex = 21728;

	class UIMonopolyWaitMainPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIMONOPOLYWAITMAINPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UIMonopolyWaitMainPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UIMonopolyWaitMainPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIMONOPOLYWAITMAINPAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::UIMonopolyWaitMainPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UIMonopolyWaitMainPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIMONOPOLYWAITMAINPAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
