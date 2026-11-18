#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class JOJJOJGKCIM_HICONNHIBDA;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define JOJJOJGKCIM_HICONNHIBDA_GPCCLHKMGOC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7CFEF0)
#define JOJJOJGKCIM_HICONNHIBDA_GPCCLHKMGOC_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int JOJJOJGKCIM_HICONNHIBDA_GPCCLHKMGOC_TypeDefinitionIndex = 50377;

struct alignas(8) JOJJOJGKCIM_HICONNHIBDA_GPCCLHKMGOC
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::JOJJOJGKCIM_HICONNHIBDA* KLHPEBKNIFB; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::System::Threading::CancellationToken MPPGOFIIMEM; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJJOJGKCIM_HICONNHIBDA_GPCCLHKMGOC_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + JOJJOJGKCIM_HICONNHIBDA_GPCCLHKMGOC_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
