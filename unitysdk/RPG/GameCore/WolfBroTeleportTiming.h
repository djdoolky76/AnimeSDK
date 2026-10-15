#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WolfBroTeleportTiming; }

#define RPG_GAMECORE_WOLFBROTELEPORTTIMING_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA94B0)
#define RPG_GAMECORE_WOLFBROTELEPORTTIMING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA94C0)
#define RPG_GAMECORE_WOLFBROTELEPORTTIMING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA9470)

namespace RPG::GameCore
{
	class WolfBroTeleportTiming : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enabled; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROTELEPORTTIMING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WolfBroTeleportTiming* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WolfBroTeleportTiming*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROTELEPORTTIMING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WolfBroTeleportTiming* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WolfBroTeleportTiming*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROTELEPORTTIMING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
