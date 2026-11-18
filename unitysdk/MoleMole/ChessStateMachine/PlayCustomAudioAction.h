#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineAction.h"

class PINBHKFHPAL;

#define MOLEMOLE_CHESSSTATEMACHINE_PLAYCUSTOMAUDIOACTION_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x19B00EB0)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYCUSTOMAUDIOACTION_GET_ISINSTANT_OFFSET UNITYSDK_OFFSET(0x19B00E10)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYCUSTOMAUDIOACTION_RUN_OFFSET UNITYSDK_OFFSET(0x19B00E20)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYCUSTOMAUDIOACTION_STOP_OFFSET UNITYSDK_OFFSET(0x19B00EF0)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYCUSTOMAUDIOACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19B00F30)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int PlayCustomAudioAction_TypeDefinitionIndex = 48476;

	class PlayCustomAudioAction : public ::MoleMole::ChessStateMachine::StateMachineAction
	{
	public:
		::System::Int32 Audio_Id; // 0x28
		::System::Boolean CanInterrupt; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYCUSTOMAUDIOACTION__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isInstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYCUSTOMAUDIOACTION_GET_ISINSTANT_OFFSET))(this);
		}

		::System::Void Run(::PINBHKFHPAL* context)
		{
			return ((::System::Void(*)(::PVOID, ::PINBHKFHPAL*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYCUSTOMAUDIOACTION_RUN_OFFSET))(this, context);
		}

		::System::Void ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYCUSTOMAUDIOACTION_FORCESTOP_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYCUSTOMAUDIOACTION_STOP_OFFSET))(this);
		}
	};
}
