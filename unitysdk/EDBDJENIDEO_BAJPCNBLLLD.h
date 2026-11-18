#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class EDBDJENIDEO;
class EDBDJENIDEO_CKAOBNPKNLH;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define EDBDJENIDEO_BAJPCNBLLLD_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x76BF80)
#define EDBDJENIDEO_BAJPCNBLLLD_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int EDBDJENIDEO_BAJPCNBLLLD_TypeDefinitionIndex = 90361;

struct alignas(8) EDBDJENIDEO_BAJPCNBLLLD
{
	::System::Threading::CancellationToken EHOGJONFLKH; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::EDBDJENIDEO_CKAOBNPKNLH* PGDOJBDJBOL; // 0x38
	::EDBDJENIDEO* KLHPEBKNIFB; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBDJENIDEO_BAJPCNBLLLD_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + EDBDJENIDEO_BAJPCNBLLLD_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
