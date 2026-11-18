#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UISuibianTempleBuddyAddPointPopWindowController; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UISUIBIANTEMPLEBUDDYADDPOINTPOPWINDOWCONTROLLER__DOADDPOINT_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7EE700)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYADDPOINTPOPWINDOWCONTROLLER__DOADDPOINT_D__11_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleBuddyAddPointPopWindowController__DoAddPoint_d__11_TypeDefinitionIndex = 51709;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
	struct alignas(8) UISuibianTempleBuddyAddPointPopWindowController__DoAddPoint_d__11
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x10
		::MoleMole::UISuibianTempleBuddyAddPointPopWindowController* __4__this; // 0x18
		::System::Object* __u__1; // 0x20
		::System::Byte _padding0[0x8];
		::System::Int32 __1__state; // 0x30

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYADDPOINTPOPWINDOWCONTROLLER__DOADDPOINT_D__11_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYADDPOINTPOPWINDOWCONTROLLER__DOADDPOINT_D__11_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
