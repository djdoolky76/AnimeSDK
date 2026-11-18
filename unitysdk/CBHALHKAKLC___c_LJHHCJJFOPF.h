#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CBHALHKAKLC___C_LJHHCJJFOPF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6E9F80)
#define CBHALHKAKLC___C_LJHHCJJFOPF_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int CBHALHKAKLC___c_LJHHCJJFOPF_TypeDefinitionIndex = 55857;

struct alignas(4) CBHALHKAKLC___c_LJHHCJJFOPF
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x38
	::System::UInt32 IAIBIDGIEKI; // 0x3C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC___C_LJHHCJJFOPF_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CBHALHKAKLC___C_LJHHCJJFOPF_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
