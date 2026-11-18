#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class MOHNKOPONIC;
namespace MoleMole::FlowCanvas::Nodes { class LDStarRandomPositionTask; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONTASK__CORORANDOMPOSITION_D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7FFD70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONTASK__CORORANDOMPOSITION_D__23_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDStarRandomPositionTask__CoroRandomPosition_d__23_TypeDefinitionIndex = 68478;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23>
	struct alignas(8) LDStarRandomPositionTask__CoroRandomPosition_d__23
	{
		::MOHNKOPONIC* _task_5__2; // 0x10
		::MoleMole::FlowCanvas::Nodes::LDStarRandomPositionTask* __4__this; // 0x18
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x20
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x30
		::System::Int32 _i_5__3; // 0x40
		::System::Int32 __1__state; // 0x44
		::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter __u__1; // 0x48

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONTASK__CORORANDOMPOSITION_D__23_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONTASK__CORORANDOMPOSITION_D__23_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
