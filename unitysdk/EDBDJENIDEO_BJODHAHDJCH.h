#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class EDBDJENIDEO;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define EDBDJENIDEO_BJODHAHDJCH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x5F1490)
#define EDBDJENIDEO_BJODHAHDJCH_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int EDBDJENIDEO_BJODHAHDJCH_TypeDefinitionIndex = 90348;

struct alignas(8) EDBDJENIDEO_BJODHAHDJCH
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::EDBDJENIDEO* KLHPEBKNIFB; // 0x20
	::System::Int32 MDPILDGFNHN; // 0x28

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBDJENIDEO_BJODHAHDJCH_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + EDBDJENIDEO_BJODHAHDJCH_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
