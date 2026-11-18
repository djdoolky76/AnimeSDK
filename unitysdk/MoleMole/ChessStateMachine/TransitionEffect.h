#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineAction.h"
#include "unitysdk/MoleMole/ScreenSwitchType.h"

class PINBHKFHPAL;

#define MOLEMOLE_CHESSSTATEMACHINE_TRANSITIONEFFECT_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x16516080)
#define MOLEMOLE_CHESSSTATEMACHINE_TRANSITIONEFFECT_GET_ISINSTANT_OFFSET UNITYSDK_OFFSET(0x16516100)
#define MOLEMOLE_CHESSSTATEMACHINE_TRANSITIONEFFECT_RUN_OFFSET UNITYSDK_OFFSET(0x16515C10)
#define MOLEMOLE_CHESSSTATEMACHINE_TRANSITIONEFFECT_STOP_OFFSET UNITYSDK_OFFSET(0x165160C0)
#define MOLEMOLE_CHESSSTATEMACHINE_TRANSITIONEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x16516110)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int TransitionEffect_TypeDefinitionIndex = 46933;

	class TransitionEffect : public ::MoleMole::ChessStateMachine::StateMachineAction
	{
	public:
		::System::Boolean NeedStopAll; // 0x28
		::System::Byte _padding0[0x3];
		::MoleMole::ScreenSwitchType SwitchType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TRANSITIONEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Run(::PINBHKFHPAL* context)
		{
			return ((::System::Void(*)(::PVOID, ::PINBHKFHPAL*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TRANSITIONEFFECT_RUN_OFFSET))(this, context);
		}

		::System::Void ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TRANSITIONEFFECT_FORCESTOP_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TRANSITIONEFFECT_STOP_OFFSET))(this);
		}

		::System::Boolean get_isInstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TRANSITIONEFFECT_GET_ISINSTANT_OFFSET))(this);
		}
	};
}
