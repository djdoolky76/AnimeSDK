#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NOFNKODKCLA_PGKOLOJAPOA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x590280)
#define NOFNKODKCLA_PGKOLOJAPOA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int NOFNKODKCLA_PGKOLOJAPOA_TypeDefinitionIndex = 63877;

struct alignas(4) NOFNKODKCLA_PGKOLOJAPOA
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x10
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter IELMICFKAAI; // 0x18
	::System::Int32 MDPILDGFNHN; // 0x1C
	::System::Int32 IEGPOKIFOIO; // 0x20

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFNKODKCLA_PGKOLOJAPOA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NOFNKODKCLA_PGKOLOJAPOA_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
