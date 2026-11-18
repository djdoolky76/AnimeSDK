#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class ICGBEDOCLLK;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define ICGBEDOCLLK_LIPJGIAOCKJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x5B50D0)
#define ICGBEDOCLLK_LIPJGIAOCKJ_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x596080)

inline static constexpr unsigned int ICGBEDOCLLK_LIPJGIAOCKJ_TypeDefinitionIndex = 79459;

struct alignas(8) ICGBEDOCLLK_LIPJGIAOCKJ
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x20
	::ICGBEDOCLLK* KLHPEBKNIFB; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x48
	::System::Int32 HLPPGDOIPDF; // 0x4C
	::System::Int32 JOFGIANGHMK; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICGBEDOCLLK_LIPJGIAOCKJ_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + ICGBEDOCLLK_LIPJGIAOCKJ_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
