#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/ChessStateMachine/TextureSheetVEBase.h"

class PINBHKFHPAL;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOSLEEPACTION_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x19275AE0)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOSLEEPACTION_RUN_OFFSET UNITYSDK_OFFSET(0x192759A0)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOSLEEPACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19275BC0)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOSLEEPACTION__RUN_G____SENDTIMEROUTEVENT_2_0_OFFSET UNITYSDK_OFFSET(0x19275A90)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOSLEEPACTION___BASE_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x19275BD0)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOSLEEPACTION___BASE_RUN_OFFSET UNITYSDK_OFFSET(0x19275C60)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int PlayerOnAutoSleepAction_TypeDefinitionIndex = 64911;

	class PlayerOnAutoSleepAction : public ::MoleMole::ChessStateMachine::TextureSheetVEBase
	{
	public:
		::Foundation::Coroutine::CoroutineHandle _handler; // 0x28
		::System::Single sleepDelay; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOSLEEPACTION__CTOR_OFFSET))(this);
		}

		::System::Void Run(::PINBHKFHPAL* context)
		{
			return ((::System::Void(*)(::PVOID, ::PINBHKFHPAL*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOSLEEPACTION_RUN_OFFSET))(this, context);
		}

		::System::Void ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOSLEEPACTION_ACTIONOVER_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* _Run_g____sendTimerOutEvent_2_0()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOSLEEPACTION__RUN_G____SENDTIMEROUTEVENT_2_0_OFFSET))(this);
		}

		::System::Void __base_ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOSLEEPACTION___BASE_ACTIONOVER_OFFSET))(this);
		}

		::System::Void __base_Run(::PINBHKFHPAL* P0)
		{
			return ((::System::Void(*)(::PVOID, ::PINBHKFHPAL*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOSLEEPACTION___BASE_RUN_OFFSET))(this, P0);
		}
	};
}
