#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class JMPHOFHNBLH_FCINGOLPLJJ;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define JMPHOFHNBLH_FCINGOLPLJJ_DLHOBCKBDPC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7AA390)
#define JMPHOFHNBLH_FCINGOLPLJJ_DLHOBCKBDPC_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int JMPHOFHNBLH_FCINGOLPLJJ_DLHOBCKBDPC_TypeDefinitionIndex = 73727;

struct alignas(8) JMPHOFHNBLH_FCINGOLPLJJ_DLHOBCKBDPC
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x20
	::JMPHOFHNBLH_FCINGOLPLJJ* KLHPEBKNIFB; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x30

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_DLHOBCKBDPC_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ_DLHOBCKBDPC_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
