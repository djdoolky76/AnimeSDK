#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RemoveHitByTimeRewindListener; }

#define RPG_GAMECORE_REMOVEHITBYTIMEREWINDLISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D985810)
#define RPG_GAMECORE_REMOVEHITBYTIMEREWINDLISTENER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D985820)
#define RPG_GAMECORE_REMOVEHITBYTIMEREWINDLISTENER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D985750)

namespace RPG::GameCore
{
	class RemoveHitByTimeRewindListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEHITBYTIMEREWINDLISTENER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveHitByTimeRewindListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveHitByTimeRewindListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEHITBYTIMEREWINDLISTENER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveHitByTimeRewindListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveHitByTimeRewindListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEHITBYTIMEREWINDLISTENER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
