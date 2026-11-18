#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class FEDPEIGDAGH;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FEDPEIGDAGH_OAODGHLIBIF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x682380)
#define FEDPEIGDAGH_OAODGHLIBIF_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int FEDPEIGDAGH_OAODGHLIBIF_TypeDefinitionIndex = 72708;

struct alignas(8) FEDPEIGDAGH_OAODGHLIBIF
{
	::FEDPEIGDAGH* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x28
	::System::Threading::CancellationToken AMIDHEAIANO; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDPEIGDAGH_OAODGHLIBIF_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FEDPEIGDAGH_OAODGHLIBIF_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
