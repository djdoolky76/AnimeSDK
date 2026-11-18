#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineAction.h"

class PINBHKFHPAL;

#define MOLEMOLE_CHESSSTATEMACHINE_SETISBLACKSCREENACTION_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x19275F40)
#define MOLEMOLE_CHESSSTATEMACHINE_SETISBLACKSCREENACTION_GET_ISINSTANT_OFFSET UNITYSDK_OFFSET(0x19275CF0)
#define MOLEMOLE_CHESSSTATEMACHINE_SETISBLACKSCREENACTION_RUN_OFFSET UNITYSDK_OFFSET(0x19275D00)
#define MOLEMOLE_CHESSSTATEMACHINE_SETISBLACKSCREENACTION_STOP_OFFSET UNITYSDK_OFFSET(0x19275F80)
#define MOLEMOLE_CHESSSTATEMACHINE_SETISBLACKSCREENACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19275FC0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int SetIsBlackScreenAction_TypeDefinitionIndex = 80919;

	class SetIsBlackScreenAction : public ::MoleMole::ChessStateMachine::StateMachineAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SETISBLACKSCREENACTION__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isInstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SETISBLACKSCREENACTION_GET_ISINSTANT_OFFSET))(this);
		}

		::System::Void Run(::PINBHKFHPAL* context)
		{
			return ((::System::Void(*)(::PVOID, ::PINBHKFHPAL*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SETISBLACKSCREENACTION_RUN_OFFSET))(this, context);
		}

		::System::Void ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SETISBLACKSCREENACTION_FORCESTOP_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SETISBLACKSCREENACTION_STOP_OFFSET))(this);
		}
	};
}
