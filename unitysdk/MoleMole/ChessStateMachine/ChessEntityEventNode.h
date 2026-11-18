#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineAction.h"

class PINBHKFHPAL;
namespace System { class String; }

#define MOLEMOLE_CHESSSTATEMACHINE_CHESSENTITYEVENTNODE_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x163E5560)
#define MOLEMOLE_CHESSSTATEMACHINE_CHESSENTITYEVENTNODE_GET_ISINSTANT_OFFSET UNITYSDK_OFFSET(0x163E55E0)
#define MOLEMOLE_CHESSSTATEMACHINE_CHESSENTITYEVENTNODE_RUN_OFFSET UNITYSDK_OFFSET(0x163E53F0)
#define MOLEMOLE_CHESSSTATEMACHINE_CHESSENTITYEVENTNODE_STOP_OFFSET UNITYSDK_OFFSET(0x163E55A0)
#define MOLEMOLE_CHESSSTATEMACHINE_CHESSENTITYEVENTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x163E55F0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ChessEntityEventNode_TypeDefinitionIndex = 79389;

	class ChessEntityEventNode : public ::MoleMole::ChessStateMachine::StateMachineAction
	{
	public:
		::System::String* EventName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CHESSENTITYEVENTNODE__CTOR_OFFSET))(this);
		}

		::System::Void Run(::PINBHKFHPAL* context)
		{
			return ((::System::Void(*)(::PVOID, ::PINBHKFHPAL*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CHESSENTITYEVENTNODE_RUN_OFFSET))(this, context);
		}

		::System::Void ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CHESSENTITYEVENTNODE_FORCESTOP_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CHESSENTITYEVENTNODE_STOP_OFFSET))(this);
		}

		::System::Boolean get_isInstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CHESSENTITYEVENTNODE_GET_ISINSTANT_OFFSET))(this);
		}
	};
}
