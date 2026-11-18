#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class JKMGJKOCGDE;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define JKMGJKOCGDE_JBHJHLHADGK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8234F0)
#define JKMGJKOCGDE_JBHJHLHADGK_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int JKMGJKOCGDE_JBHJHLHADGK_TypeDefinitionIndex = 89842;

struct alignas(8) JKMGJKOCGDE_JBHJHLHADGK
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x10
	::PipelineCamera::ScopedDelegateHandle GHANCJDIDBC; // 0x18
	::JKMGJKOCGDE* KLHPEBKNIFB; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMGJKOCGDE_JBHJHLHADGK_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + JKMGJKOCGDE_JBHJHLHADGK_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
