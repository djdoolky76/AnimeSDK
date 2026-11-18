#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineAction.h"

class PINBHKFHPAL;

#define MOLEMOLE_CHESSSTATEMACHINE_WAITFORNEXTFRAMEACTION_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x1908B320)
#define MOLEMOLE_CHESSSTATEMACHINE_WAITFORNEXTFRAMEACTION_GET_ISINSTANT_OFFSET UNITYSDK_OFFSET(0x1908B2C0)
#define MOLEMOLE_CHESSSTATEMACHINE_WAITFORNEXTFRAMEACTION_RUN_OFFSET UNITYSDK_OFFSET(0x1908B2D0)
#define MOLEMOLE_CHESSSTATEMACHINE_WAITFORNEXTFRAMEACTION_STOP_OFFSET UNITYSDK_OFFSET(0x1908B360)
#define MOLEMOLE_CHESSSTATEMACHINE_WAITFORNEXTFRAMEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1908B3A0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int WaitForNextFrameAction_TypeDefinitionIndex = 66605;

	class WaitForNextFrameAction : public ::MoleMole::ChessStateMachine::StateMachineAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_WAITFORNEXTFRAMEACTION__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isInstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_WAITFORNEXTFRAMEACTION_GET_ISINSTANT_OFFSET))(this);
		}

		::System::Void Run(::PINBHKFHPAL* context)
		{
			return ((::System::Void(*)(::PVOID, ::PINBHKFHPAL*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_WAITFORNEXTFRAMEACTION_RUN_OFFSET))(this, context);
		}

		::System::Void ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_WAITFORNEXTFRAMEACTION_FORCESTOP_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_WAITFORNEXTFRAMEACTION_STOP_OFFSET))(this);
		}
	};
}
