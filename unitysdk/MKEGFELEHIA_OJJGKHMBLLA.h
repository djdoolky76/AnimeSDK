#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class MKEGFELEHIA;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MKEGFELEHIA_OJJGKHMBLLA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7C06A0)
#define MKEGFELEHIA_OJJGKHMBLLA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int MKEGFELEHIA_OJJGKHMBLLA_TypeDefinitionIndex = 58086;

struct alignas(8) MKEGFELEHIA_OJJGKHMBLLA
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x20
	::MKEGFELEHIA* KLHPEBKNIFB; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x30

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEGFELEHIA_OJJGKHMBLLA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MKEGFELEHIA_OJJGKHMBLLA_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
