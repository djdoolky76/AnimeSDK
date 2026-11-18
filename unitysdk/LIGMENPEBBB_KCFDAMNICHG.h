#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class LIGMENPEBBB;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define LIGMENPEBBB_KCFDAMNICHG_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x52F940)
#define LIGMENPEBBB_KCFDAMNICHG_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int LIGMENPEBBB_KCFDAMNICHG_TypeDefinitionIndex = 50628;

struct alignas(8) LIGMENPEBBB_KCFDAMNICHG
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::PipelineCamera::ScopedDelegateHandle GHANCJDIDBC; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x28
	::LIGMENPEBBB* KLHPEBKNIFB; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGMENPEBBB_KCFDAMNICHG_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + LIGMENPEBBB_KCFDAMNICHG_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
