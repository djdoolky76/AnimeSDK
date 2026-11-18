#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class GDKBOONBJOD_ODGKMGHEENB;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define GDKBOONBJOD_ODGKMGHEENB_PDDEBLBNMGH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x682870)
#define GDKBOONBJOD_ODGKMGHEENB_PDDEBLBNMGH_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int GDKBOONBJOD_ODGKMGHEENB_PDDEBLBNMGH_TypeDefinitionIndex = 55384;

struct alignas(8) GDKBOONBJOD_ODGKMGHEENB_PDDEBLBNMGH
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x20
	::GDKBOONBJOD_ODGKMGHEENB* KLHPEBKNIFB; // 0x30
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKBOONBJOD_ODGKMGHEENB_PDDEBLBNMGH_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GDKBOONBJOD_ODGKMGHEENB_PDDEBLBNMGH_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
