#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class NHNINMBKJBB;
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NHNINMBKJBB_PFILIEGJBGI_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x5A4030)
#define NHNINMBKJBB_PFILIEGJBGI_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int NHNINMBKJBB_PFILIEGJBGI_TypeDefinitionIndex = 90318;

struct alignas(8) NHNINMBKJBB_PFILIEGJBGI
{
	::System::Action* GJBHEJGENMI; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x18
	::NHNINMBKJBB* KLHPEBKNIFB; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x28
	::System::Single EEODALLOKMF; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x3C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHNINMBKJBB_PFILIEGJBGI_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NHNINMBKJBB_PFILIEGJBGI_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
