#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineAction.h"

class PINBHKFHPAL;

#define MOLEMOLE_CHESSSTATEMACHINE_SETISPLAYERONEVENTACTION_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x1BA18490)
#define MOLEMOLE_CHESSSTATEMACHINE_SETISPLAYERONEVENTACTION_GET_ISINSTANT_OFFSET UNITYSDK_OFFSET(0x1BA18430)
#define MOLEMOLE_CHESSSTATEMACHINE_SETISPLAYERONEVENTACTION_RUN_OFFSET UNITYSDK_OFFSET(0x1BA18440)
#define MOLEMOLE_CHESSSTATEMACHINE_SETISPLAYERONEVENTACTION_STOP_OFFSET UNITYSDK_OFFSET(0x1BA184D0)
#define MOLEMOLE_CHESSSTATEMACHINE_SETISPLAYERONEVENTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA18510)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int SetIsPlayerOnEventAction_TypeDefinitionIndex = 71005;

	class SetIsPlayerOnEventAction : public ::MoleMole::ChessStateMachine::StateMachineAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SETISPLAYERONEVENTACTION__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isInstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SETISPLAYERONEVENTACTION_GET_ISINSTANT_OFFSET))(this);
		}

		::System::Void Run(::PINBHKFHPAL* context)
		{
			return ((::System::Void(*)(::PVOID, ::PINBHKFHPAL*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SETISPLAYERONEVENTACTION_RUN_OFFSET))(this, context);
		}

		::System::Void ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SETISPLAYERONEVENTACTION_FORCESTOP_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SETISPLAYERONEVENTACTION_STOP_OFFSET))(this);
		}
	};
}
