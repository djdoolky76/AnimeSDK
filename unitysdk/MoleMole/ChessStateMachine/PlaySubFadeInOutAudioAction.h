#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineAction.h"

class AIKGHHJKNCE;
class PINBHKFHPAL;

#define MOLEMOLE_CHESSSTATEMACHINE_PLAYSUBFADEINOUTAUDIOACTION_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x1BA182B0)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYSUBFADEINOUTAUDIOACTION_GET_ISINSTANT_OFFSET UNITYSDK_OFFSET(0x1BA17F30)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYSUBFADEINOUTAUDIOACTION_RUNINNER_OFFSET UNITYSDK_OFFSET(0x1BA18170)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYSUBFADEINOUTAUDIOACTION_RUN_OFFSET UNITYSDK_OFFSET(0x1BA17F40)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYSUBFADEINOUTAUDIOACTION_STOP_OFFSET UNITYSDK_OFFSET(0x1BA182F0)
#define MOLEMOLE_CHESSSTATEMACHINE_PLAYSUBFADEINOUTAUDIOACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA18330)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int PlaySubFadeInOutAudioAction_TypeDefinitionIndex = 67584;

	class PlaySubFadeInOutAudioAction : public ::MoleMole::ChessStateMachine::StateMachineAction
	{
	public:
		::System::Int32 Audio_Id; // 0x28
		::System::Boolean PlayDefaulOut; // 0x2C
		::System::Boolean PlayDefaultIn; // 0x2D
		::System::Boolean NeedCustom; // 0x2E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYSUBFADEINOUTAUDIOACTION__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isInstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYSUBFADEINOUTAUDIOACTION_GET_ISINSTANT_OFFSET))(this);
		}

		::System::Void Run(::PINBHKFHPAL* context)
		{
			return ((::System::Void(*)(::PVOID, ::PINBHKFHPAL*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYSUBFADEINOUTAUDIOACTION_RUN_OFFSET))(this, context);
		}

		::System::Void RunInner(::AIKGHHJKNCE* proxy)
		{
			return ((::System::Void(*)(::PVOID, ::AIKGHHJKNCE*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYSUBFADEINOUTAUDIOACTION_RUNINNER_OFFSET))(this, proxy);
		}

		::System::Void ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYSUBFADEINOUTAUDIOACTION_FORCESTOP_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_PLAYSUBFADEINOUTAUDIOACTION_STOP_OFFSET))(this);
		}
	};
}
