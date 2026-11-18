#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class IODKCDDFOIJ;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define IODKCDDFOIJ_PNPOPDHMNKI_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7E85F0)
#define IODKCDDFOIJ_PNPOPDHMNKI_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int IODKCDDFOIJ_PNPOPDHMNKI_TypeDefinitionIndex = 48140;

struct alignas(8) IODKCDDFOIJ_PNPOPDHMNKI
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x10
	::IODKCDDFOIJ* KLHPEBKNIFB; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::PipelineCamera::ScopedDelegateHandle GHANCJDIDBC; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODKCDDFOIJ_PNPOPDHMNKI_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + IODKCDDFOIJ_PNPOPDHMNKI_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
