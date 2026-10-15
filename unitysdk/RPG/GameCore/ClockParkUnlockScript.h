#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClockParkUnlockScript; }

#define RPG_GAMECORE_CLOCKPARKUNLOCKSCRIPT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C7420)
#define RPG_GAMECORE_CLOCKPARKUNLOCKSCRIPT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5C7430)
#define RPG_GAMECORE_CLOCKPARKUNLOCKSCRIPT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5C73F0)

namespace RPG::GameCore
{
	class ClockParkUnlockScript : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 ScriptID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKUNLOCKSCRIPT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClockParkUnlockScript* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClockParkUnlockScript*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKUNLOCKSCRIPT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClockParkUnlockScript* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClockParkUnlockScript*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKUNLOCKSCRIPT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
