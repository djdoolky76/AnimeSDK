#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Timeline { class MaterialBaseBehavior; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR__REFRESHMONORENDERENTITY_D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x97B4D0)
#define MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR__REFRESHMONORENDERENTITY_D__21_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x596080)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MaterialBaseBehavior__RefreshMonoRenderEntity_d__21_TypeDefinitionIndex = 32249;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21>
	struct alignas(8) MaterialBaseBehavior__RefreshMonoRenderEntity_d__21
	{
		::MoleMole::Timeline::MaterialBaseBehavior* __4__this; // 0x10
		::System::Runtime::CompilerServices::TaskAwaiter __u__1; // 0x18
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x20
		::System::Int32 __1__state; // 0x40

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR__REFRESHMONORENDERENTITY_D__21_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALBASEBEHAVIOR__REFRESHMONORENDERENTITY_D__21_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
