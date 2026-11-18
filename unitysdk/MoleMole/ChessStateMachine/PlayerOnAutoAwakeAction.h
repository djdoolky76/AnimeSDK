#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/ChessStateMachine/TextureSheetVEBase.h"

class PINBHKFHPAL;

#define MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x121A23C0)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION_RUN_OFFSET UNITYSDK_OFFSET(0x121A21A0)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x121A24A0)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION__RUN_B__1_0_OFFSET UNITYSDK_OFFSET(0x121A24B0)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION___BASE_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x121A24E0)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION___BASE_RUN_OFFSET UNITYSDK_OFFSET(0x121A2570)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int PlayerOnAutoAwakeAction_TypeDefinitionIndex = 43834;

	class PlayerOnAutoAwakeAction : public ::MoleMole::ChessStateMachine::TextureSheetVEBase
	{
	public:
		::Foundation::Coroutine::CoroutineHandle _handler; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION__CTOR_OFFSET))(this);
		}

		::System::Void Run(::PINBHKFHPAL* context)
		{
			return ((::System::Void(*)(::PVOID, ::PINBHKFHPAL*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION_RUN_OFFSET))(this, context);
		}

		::System::Void ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION_ACTIONOVER_OFFSET))(this);
		}

		::System::Void _Run_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION__RUN_B__1_0_OFFSET))(this);
		}

		::System::Void __base_ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION___BASE_ACTIONOVER_OFFSET))(this);
		}

		::System::Void __base_Run(::PINBHKFHPAL* P0)
		{
			return ((::System::Void(*)(::PVOID, ::PINBHKFHPAL*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYERONAUTOAWAKEACTION___BASE_RUN_OFFSET))(this, P0);
		}
	};
}
