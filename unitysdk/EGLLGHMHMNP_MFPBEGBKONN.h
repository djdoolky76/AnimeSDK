#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class EGLLGHMHMNP;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define EGLLGHMHMNP_MFPBEGBKONN_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x633E10)
#define EGLLGHMHMNP_MFPBEGBKONN_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int EGLLGHMHMNP_MFPBEGBKONN_TypeDefinitionIndex = 51021;

struct alignas(8) EGLLGHMHMNP_MFPBEGBKONN
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::EGLLGHMHMNP* KLHPEBKNIFB; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_MFPBEGBKONN_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_MFPBEGBKONN_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
