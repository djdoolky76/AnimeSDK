#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineAction.h"

class BEKNDGPAOBH;
class PINBHKFHPAL;

#define MOLEMOLE_CHESSSTATEMACHINE_CLEARMOVESTATEACTION_CLEARMOVESTATE_OFFSET UNITYSDK_OFFSET(0xFFC36E0)
#define MOLEMOLE_CHESSSTATEMACHINE_CLEARMOVESTATEACTION_FORCESTOP_OFFSET UNITYSDK_OFFSET(0xFFC3760)
#define MOLEMOLE_CHESSSTATEMACHINE_CLEARMOVESTATEACTION_GET_ISINSTANT_OFFSET UNITYSDK_OFFSET(0xFFC34B0)
#define MOLEMOLE_CHESSSTATEMACHINE_CLEARMOVESTATEACTION_RUN_OFFSET UNITYSDK_OFFSET(0xFFC34C0)
#define MOLEMOLE_CHESSSTATEMACHINE_CLEARMOVESTATEACTION_STOP_OFFSET UNITYSDK_OFFSET(0xFFC3720)
#define MOLEMOLE_CHESSSTATEMACHINE_CLEARMOVESTATEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xFFC38C0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ClearMoveStateAction_TypeDefinitionIndex = 42240;

	class ClearMoveStateAction : public ::MoleMole::ChessStateMachine::StateMachineAction
	{
	public:
		::BEKNDGPAOBH* _actionContext; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CLEARMOVESTATEACTION__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isInstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CLEARMOVESTATEACTION_GET_ISINSTANT_OFFSET))(this);
		}

		::System::Void Run(::PINBHKFHPAL* context)
		{
			return ((::System::Void(*)(::PVOID, ::PINBHKFHPAL*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CLEARMOVESTATEACTION_RUN_OFFSET))(this, context);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CLEARMOVESTATEACTION_STOP_OFFSET))(this);
		}

		::System::Void ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CLEARMOVESTATEACTION_FORCESTOP_OFFSET))(this);
		}

		::System::Void ClearMoveState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CLEARMOVESTATEACTION_CLEARMOVESTATE_OFFSET))(this);
		}
	};
}
