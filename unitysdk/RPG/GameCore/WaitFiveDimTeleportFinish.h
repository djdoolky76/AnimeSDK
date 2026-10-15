#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitFiveDimTeleportFinish; }

#define RPG_GAMECORE_WAITFIVEDIMTELEPORTFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC97D20)
#define RPG_GAMECORE_WAITFIVEDIMTELEPORTFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC97D30)
#define RPG_GAMECORE_WAITFIVEDIMTELEPORTFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC97C60)

namespace RPG::GameCore
{
	class WaitFiveDimTeleportFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFIVEDIMTELEPORTFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitFiveDimTeleportFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitFiveDimTeleportFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFIVEDIMTELEPORTFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitFiveDimTeleportFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitFiveDimTeleportFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFIVEDIMTELEPORTFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
