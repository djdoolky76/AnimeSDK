#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class MFPPANAELJJ;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MFPPANAELJJ_NLICHLMHKOM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x76D250)
#define MFPPANAELJJ_NLICHLMHKOM_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int MFPPANAELJJ_NLICHLMHKOM_TypeDefinitionIndex = 77766;

struct alignas(8) MFPPANAELJJ_NLICHLMHKOM
{
	::MFPPANAELJJ* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPPANAELJJ_NLICHLMHKOM_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MFPPANAELJJ_NLICHLMHKOM_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
