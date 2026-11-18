#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class DIMPFKMKBFA;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define DIMPFKMKBFA_LHOIKKIELNJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x701EB0)
#define DIMPFKMKBFA_LHOIKKIELNJ_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int DIMPFKMKBFA_LHOIKKIELNJ_TypeDefinitionIndex = 41871;

struct alignas(8) DIMPFKMKBFA_LHOIKKIELNJ
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x20
	::PipelineCamera::ScopedDelegateHandle GHANCJDIDBC; // 0x28
	::DIMPFKMKBFA* KLHPEBKNIFB; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMPFKMKBFA_LHOIKKIELNJ_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + DIMPFKMKBFA_LHOIKKIELNJ_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
