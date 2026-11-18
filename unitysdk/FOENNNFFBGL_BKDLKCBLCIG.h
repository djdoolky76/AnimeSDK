#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class FOENNNFFBGL;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FOENNNFFBGL_BKDLKCBLCIG_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6824D0)
#define FOENNNFFBGL_BKDLKCBLCIG_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int FOENNNFFBGL_BKDLKCBLCIG_TypeDefinitionIndex = 47044;

struct alignas(8) FOENNNFFBGL_BKDLKCBLCIG
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x10
	::FOENNNFFBGL* KLHPEBKNIFB; // 0x18
	::PipelineCamera::ScopedDelegateHandle GHANCJDIDBC; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOENNNFFBGL_BKDLKCBLCIG_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FOENNNFFBGL_BKDLKCBLCIG_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
