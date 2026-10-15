#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TimeRewindControllerInteract; }

#define RPG_GAMECORE_TIMEREWINDCONTROLLERINTERACT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB874F0)
#define RPG_GAMECORE_TIMEREWINDCONTROLLERINTERACT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB87500)
#define RPG_GAMECORE_TIMEREWINDCONTROLLERINTERACT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB87430)

namespace RPG::GameCore
{
	class TimeRewindControllerInteract : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDCONTROLLERINTERACT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimeRewindControllerInteract* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimeRewindControllerInteract*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDCONTROLLERINTERACT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimeRewindControllerInteract* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimeRewindControllerInteract*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDCONTROLLERINTERACT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
