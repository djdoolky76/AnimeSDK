#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class CBDDODKFCIJ;
class EDBDJENIDEO;
class EDBDJENIDEO_CEDJHPKAJNA;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define EDBDJENIDEO_DGMOLIOKBJL_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x633D00)
#define EDBDJENIDEO_DGMOLIOKBJL_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int EDBDJENIDEO_DGMOLIOKBJL_TypeDefinitionIndex = 90359;

struct alignas(8) EDBDJENIDEO_DGMOLIOKBJL
{
	::System::Threading::CancellationToken EHOGJONFLKH; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::CBDDODKFCIJ* OFCDOGCNJJM; // 0x28
	::EDBDJENIDEO_CEDJHPKAJNA* PGDOJBDJBOL; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x38
	::EDBDJENIDEO* KLHPEBKNIFB; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBDJENIDEO_DGMOLIOKBJL_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + EDBDJENIDEO_DGMOLIOKBJL_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
