#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class IEBDNKDCKMP;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define IEBDNKDCKMP_MIIGENEDFLI_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x724F80)
#define IEBDNKDCKMP_MIIGENEDFLI_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int IEBDNKDCKMP_MIIGENEDFLI_TypeDefinitionIndex = 85483;

struct alignas(8) IEBDNKDCKMP_MIIGENEDFLI
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x10
	::PipelineCamera::ScopedDelegateHandle GHANCJDIDBC; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::IEBDNKDCKMP* KLHPEBKNIFB; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBDNKDCKMP_MIIGENEDFLI_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + IEBDNKDCKMP_MIIGENEDFLI_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
