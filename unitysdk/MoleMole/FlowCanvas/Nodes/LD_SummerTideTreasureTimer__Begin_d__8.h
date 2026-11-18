#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::FlowCanvas::Nodes { class LD_SummerTideTreasureTimer; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURETIMER__BEGIN_D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x745720)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURETIMER__BEGIN_D__8_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SummerTideTreasureTimer__Begin_d__8_TypeDefinitionIndex = 82982;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
	struct alignas(8) LD_SummerTideTreasureTimer__Begin_d__8
	{
		::FlowCanvas::Flow f; // 0x10
		::MoleMole::FlowCanvas::Nodes::LD_SummerTideTreasureTimer* __4__this; // 0x38
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x40
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x48
		::System::Int32 __1__state; // 0x58

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURETIMER__BEGIN_D__8_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURETIMER__BEGIN_D__8_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
