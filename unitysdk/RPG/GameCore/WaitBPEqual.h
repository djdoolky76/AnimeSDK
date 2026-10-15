#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitBPEqual; }

#define RPG_GAMECORE_WAITBPEQUAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC94590)
#define RPG_GAMECORE_WAITBPEQUAL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC945A0)
#define RPG_GAMECORE_WAITBPEQUAL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC94560)

namespace RPG::GameCore
{
	class WaitBPEqual : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 Count; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBPEQUAL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitBPEqual* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitBPEqual*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBPEQUAL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitBPEqual* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitBPEqual*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBPEQUAL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
