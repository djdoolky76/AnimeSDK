#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class BFMJNHPDJIM;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define BFMJNHPDJIM_FMIJDIHLOEF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6F2250)
#define BFMJNHPDJIM_FMIJDIHLOEF_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int BFMJNHPDJIM_FMIJDIHLOEF_TypeDefinitionIndex = 52813;

struct alignas(8) BFMJNHPDJIM_FMIJDIHLOEF
{
	::BFMJNHPDJIM* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x28
	::PipelineCamera::ScopedDelegateHandle GHANCJDIDBC; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMJNHPDJIM_FMIJDIHLOEF_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + BFMJNHPDJIM_FMIJDIHLOEF_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
