#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitServerRotatableRegionChange; }

#define RPG_GAMECORE_WAITSERVERROTATABLEREGIONCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA1890)
#define RPG_GAMECORE_WAITSERVERROTATABLEREGIONCHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA18A0)
#define RPG_GAMECORE_WAITSERVERROTATABLEREGIONCHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA1850)

namespace RPG::GameCore
{
	class WaitServerRotatableRegionChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERROTATABLEREGIONCHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitServerRotatableRegionChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitServerRotatableRegionChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERROTATABLEREGIONCHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitServerRotatableRegionChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitServerRotatableRegionChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERROTATABLEREGIONCHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
