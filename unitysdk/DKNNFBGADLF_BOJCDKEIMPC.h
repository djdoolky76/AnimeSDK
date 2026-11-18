#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class DKNNFBGADLF;
class DKNNFBGADLF_FFKIBHGIIHM;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define DKNNFBGADLF_BOJCDKEIMPC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6CE030)
#define DKNNFBGADLF_BOJCDKEIMPC_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int DKNNFBGADLF_BOJCDKEIMPC_TypeDefinitionIndex = 87544;

struct alignas(8) DKNNFBGADLF_BOJCDKEIMPC
{
	::DKNNFBGADLF* KLHPEBKNIFB; // 0x10
	::DKNNFBGADLF_FFKIBHGIIHM* PGDOJBDJBOL; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNNFBGADLF_BOJCDKEIMPC_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + DKNNFBGADLF_BOJCDKEIMPC_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
