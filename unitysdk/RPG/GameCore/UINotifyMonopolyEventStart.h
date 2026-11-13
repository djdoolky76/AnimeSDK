#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UINotifyMonopolyEventStart; }

#define RPG_GAMECORE_UINOTIFYMONOPOLYEVENTSTART_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED2DF30)
#define RPG_GAMECORE_UINOTIFYMONOPOLYEVENTSTART_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1ED2DF40)
#define RPG_GAMECORE_UINOTIFYMONOPOLYEVENTSTART_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ED2DE70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UINotifyMonopolyEventStart_TypeDefinitionIndex = 21265;

	class UINotifyMonopolyEventStart : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UINOTIFYMONOPOLYEVENTSTART_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UINotifyMonopolyEventStart* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UINotifyMonopolyEventStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UINOTIFYMONOPOLYEVENTSTART_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::UINotifyMonopolyEventStart* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UINotifyMonopolyEventStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UINOTIFYMONOPOLYEVENTSTART_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
