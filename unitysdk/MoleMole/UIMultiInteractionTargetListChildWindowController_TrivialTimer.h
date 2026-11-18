#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }

#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_TRIVIALTIMER_CHECKFINISH_OFFSET UNITYSDK_OFFSET(0x748160)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_TRIVIALTIMER_KILL_OFFSET UNITYSDK_OFFSET(0x748080)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_TRIVIALTIMER_RESET_OFFSET UNITYSDK_OFFSET(0x7480D0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_TRIVIALTIMER_SETCURTIME_OFFSET UNITYSDK_OFFSET(0x748150)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_TRIVIALTIMER_UPDATE_OFFSET UNITYSDK_OFFSET(0x748140)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_TRIVIALTIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x748060)

namespace MoleMole
{
	inline static constexpr unsigned int UIMultiInteractionTargetListChildWindowController_TrivialTimer_TypeDefinitionIndex = 49825;

	struct alignas(8) UIMultiInteractionTargetListChildWindowController_TrivialTimer
	{
		::System::Single _startTime; // 0x10
		::System::Single _nowTime; // 0x14
		::System::Single _duration; // 0x18
		::System::Boolean _finished; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Action* _callback; // 0x20

		::System::Void _ctor(::System::Single nowTime, ::System::Single duration, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_TRIVIALTIMER__CTOR_OFFSET))(this, nowTime, duration, callback);
		}

		::System::Void Kill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_TRIVIALTIMER_KILL_OFFSET))(this);
		}

		::System::Void Reset(::System::Single time, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_TRIVIALTIMER_RESET_OFFSET))(this, time, callback);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_TRIVIALTIMER_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void SetCurTime(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_TRIVIALTIMER_SETCURTIME_OFFSET))(this, time);
		}

		::System::Void CheckFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTCHILDWINDOWCONTROLLER_TRIVIALTIMER_CHECKFINISH_OFFSET))(this);
		}
	};
}
